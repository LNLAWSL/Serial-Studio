/*
 * Copyright (c) 2020-2021 Alex Spataru <https://github.com/alex-spataru>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#pragma once

#include <QColor>
#include <QObject>
#include <QSettings>

namespace Misc
{
/**
 * @brief The ThemeManager class
 *
 * The @c ThemeManager class reads all the colors that are required to build a Serial
 * Studio theme and makes them available to the rest of the application.
 *
 * Themes are stored as JSON files in the "assets/themes" folder. The class automatically
 * builds a model with the available themes. The only requirement to create your own
 * themes is to create a JSON theme file and add it to the application resources file.
 */
class ThemeManager : public QObject
{
    // clang-format off
    Q_OBJECT
    Q_PROPERTY(int themeId
               READ themeId
               NOTIFY themeChanged)
    Q_PROPERTY(QColor base
               READ base
               NOTIFY themeChanged)
    Q_PROPERTY(QColor link
               READ link
               NOTIFY themeChanged)
    Q_PROPERTY(QColor button
               READ button
               NOTIFY themeChanged)
    Q_PROPERTY(QColor window
               READ window
               NOTIFY themeChanged)
    Q_PROPERTY(QColor text
               READ text
               NOTIFY themeChanged)
    Q_PROPERTY(QColor midlight
               READ midlight
               NOTIFY themeChanged)
    Q_PROPERTY(QColor highlight
               READ highlight
               NOTIFY themeChanged)
    Q_PROPERTY(QColor brightText
               READ brightText
               NOTIFY themeChanged)
    Q_PROPERTY(QColor buttonText
               READ buttonText
               NOTIFY themeChanged)
    Q_PROPERTY(QColor windowText
               READ windowText
               NOTIFY themeChanged)
    Q_PROPERTY(QColor tooltipText
               READ tooltipText
               NOTIFY themeChanged)
    Q_PROPERTY(QColor tooltipBase
               READ tooltipBase
               NOTIFY themeChanged)
    Q_PROPERTY(QColor highlightedText
               READ highlightedText
               NOTIFY themeChanged)
    Q_PROPERTY(QColor highlightedTextAlternative
               READ highlightedTextAlternative
               NOTIFY themeChanged)
    Q_PROPERTY(QColor placeholderText
               READ placeholderText
               NOTIFY themeChanged)
    Q_PROPERTY(QColor toolbarGradient1
               READ toolbarGradient1
               NOTIFY themeChanged)
    Q_PROPERTY(QColor toolbarGradient2
               READ toolbarGradient2
               NOTIFY themeChanged)
    Q_PROPERTY(QColor consoleText
               READ consoleText
               NOTIFY themeChanged)
    Q_PROPERTY(QColor consoleBase
               READ consoleBase
               NOTIFY themeChanged)
    Q_PROPERTY(QColor consoleButton
               READ consoleButton
               NOTIFY themeChanged)
    Q_PROPERTY(QColor consoleWindow
               READ consoleWindow
               NOTIFY themeChanged)
    Q_PROPERTY(QColor consoleHighlight
               READ consoleHighlight
               NOTIFY themeChanged)
    Q_PROPERTY(QColor consoleHighlightedText
               READ consoleHighlightedText
               NOTIFY themeChanged)
    Q_PROPERTY(QColor consolePlaceholderText
               READ consolePlaceholderText
               NOTIFY themeChanged)
    Q_PROPERTY(QColor windowBackground
               READ windowBackground
               NOTIFY themeChanged)
    Q_PROPERTY(QColor windowGradient1
               READ windowGradient1
               NOTIFY themeChanged)
    Q_PROPERTY(QColor windowGradient2
               READ windowGradient2
               NOTIFY themeChanged)
    Q_PROPERTY(QColor menubarGradient1
               READ menubarGradient1
               NOTIFY themeChanged)
    Q_PROPERTY(QColor menubarGradient2
               READ menubarGradient2
               NOTIFY themeChanged)
    Q_PROPERTY(QColor menubarText
               READ menubarText
               NOTIFY themeChanged)
    Q_PROPERTY(QColor dialogBackground
               READ dialogBackground
               NOTIFY themeChanged)
    Q_PROPERTY(QColor alternativeHighlight
               READ alternativeHighlight
               NOTIFY themeChanged)
    Q_PROPERTY(QColor setupPanelBackground
               READ setupPanelBackground
               NOTIFY themeChanged)
    Q_PROPERTY(QColor widgetTextPrimary
               READ widgetTextPrimary
               NOTIFY themeChanged)
    Q_PROPERTY(QColor widgetTextSecondary
               READ widgetTextSecondary
               NOTIFY themeChanged)
    Q_PROPERTY(QColor widgetWindowBackground
               READ widgetWindowBackground
               NOTIFY themeChanged)
    Q_PROPERTY(QColor widgetWindowBorder
               READ widgetWindowBorder
               NOTIFY themeChanged)
    Q_PROPERTY(QColor paneWindowBackground
               READ paneWindowBackground
               NOTIFY themeChanged)
    Q_PROPERTY(QColor ledEnabled
               READ ledEnabled
               NOTIFY themeChanged)
    Q_PROPERTY(QColor ledDisabled
               READ ledDisabled
               NOTIFY themeChanged)
    Q_PROPERTY(QColor csvCheckbox
               READ csvCheckbox
               NOTIFY themeChanged)
    Q_PROPERTY(QColor widgetForegroundPrimary
               READ widgetForegroundPrimary
               NOTIFY themeChanged)
    Q_PROPERTY(QColor widgetForegroundSecondary
               READ widgetForegroundSecondary
               NOTIFY themeChanged)
    Q_PROPERTY(QColor widgetIndicator
               READ widgetIndicator
               NOTIFY themeChanged)
    Q_PROPERTY(QColor widgetControlBackground
               READ widgetControlBackground
               NOTIFY themeChanged)
    Q_PROPERTY(QColor connectButtonChecked
               READ connectButtonChecked
               NOTIFY themeChanged)
    Q_PROPERTY(QColor connectButtonUnchecked
               READ connectButtonUnchecked
               NOTIFY themeChanged)
    Q_PROPERTY(QVector<QString> widgetColors
               READ widgetColors
               NOTIFY themeChanged)
    Q_PROPERTY(QVector<QString> availableThemes
               READ availableThemes
               NOTIFY availableThemesChanged)
    // clang-format on

signals:
    void themeChanged();
    void availableThemesChanged();

public:
    static ThemeManager *getInstance();

    int themeId() const;

    QColor base() const;
    QColor link() const;
    QColor button() const;
    QColor window() const;
    QColor text() const;
    QColor midlight() const;
    QColor highlight() const;
    QColor brightText() const;
    QColor buttonText() const;
    QColor windowText() const;
    QColor tooltipText() const;
    QColor tooltipBase() const;
    QColor highlightedText() const;
    QColor highlightedTextAlternative() const;
    QColor placeholderText() const;
    QColor toolbarGradient1() const;
    QColor toolbarGradient2() const;
    QColor menubarGradient1() const;
    QColor menubarGradient2() const;
    QColor menubarText() const;
    QColor dialogBackground() const;
    QColor consoleText() const;
    QColor consoleBase() const;
    QColor consoleButton() const;
    QColor consoleWindow() const;
    QColor consoleHighlight() const;
    QColor consoleHighlightedText() const;
    QColor consolePlaceholderText() const;
    QColor windowBackground() const;
    QColor windowGradient1() const;
    QColor windowGradient2() const;
    QColor alternativeHighlight() const;
    QColor setupPanelBackground() const;
    QColor widgetTextPrimary() const;
    QColor widgetTextSecondary() const;
    QColor widgetWindowBackground() const;
    QColor widgetWindowBorder() const;
    QColor paneWindowBackground() const;
    QColor ledEnabled() const;
    QColor ledDisabled() const;
    QColor csvCheckbox() const;
    QColor widgetForegroundPrimary() const;
    QColor widgetForegroundSecondary() const;
    QColor widgetIndicator() const;
    QColor widgetControlBackground() const;
    QColor connectButtonChecked() const;
    QColor connectButtonUnchecked() const;

    QVector<QString> widgetColors() const;
    QVector<QString> availableThemes() const;

public slots:
    void setTheme(const int id);

private slots:
    void populateThemes();
    void loadTheme(const int id);

private:
    ThemeManager();

private:
    int m_themeId;
    QSettings m_settings;
    QVector<QString> m_availableThemes;
    QVector<QString> m_availableThemesPaths;

    QColor m_base;
    QColor m_link;
    QColor m_button;
    QColor m_window;
    QColor m_text;
    QColor m_midlight;
    QColor m_highlight;
    QColor m_brightText;
    QColor m_buttonText;
    QColor m_windowText;
    QColor m_tooltipText;
    QColor m_tooltipBase;
    QColor m_highlightedText;
    QColor m_highlightedTextAlternative;
    QColor m_placeholderText;
    QColor m_toolbarGradient1;
    QColor m_toolbarGradient2;
    QColor m_menubarGradient1;
    QColor m_menubarGradient2;
    QColor m_menubarText;
    QColor m_dialogBackground;
    QColor m_consoleText;
    QColor m_consoleBase;
    QColor m_consoleButton;
    QColor m_consoleWindow;
    QColor m_consoleHighlight;
    QColor m_consoleHighlightedText;
    QColor m_consolePlaceholderText;
    QColor m_windowBackground;
    QColor m_windowGradient1;
    QColor m_windowGradient2;
    QColor m_alternativeHighlight;
    QColor m_setupPanelBackground;
    QColor m_widgetTextPrimary;
    QColor m_widgetTextSecondary;
    QColor m_widgetWindowBackground;
    QColor m_widgetWindowBorder;
    QColor m_paneWindowBackground;
    QColor m_ledEnabled;
    QColor m_ledDisabled;
    QColor m_csvCheckbox;
    QColor m_widgetForegroundPrimary;
    QColor m_widgetForegroundSecondary;
    QColor m_widgetIndicator;
    QColor m_widgetControlBackground;
    QColor m_connectButtonChecked;
    QColor m_connectButtonUnchecked;
    QVector<QString> m_widgetColors;
};
}

inline QString QSS(const QString &style, const QColor &color)
{
    return QString(style).arg(color.name());
}

inline QString QSS(const QString &style, const QColor &c1, const QColor &c2)
{
    return QString(style).arg(c1.name(), c2.name());
}

inline QString QSS(const QString &style, const QColor &c1, const QColor &c2,
                   const QColor &c3)
{
    return QString(style).arg(c1.name(), c2.name(), c3.name());
}
