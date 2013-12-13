#ifndef LANGUAGESELECTIONPAGE_HPP
#define LANGUAGESELECTIONPAGE_HPP

#include <QWizardPage>

#include "ui_languageselectionpage.h"

namespace Wizard
{
    class MainWizard;

    class LanguageSelectionPage : public QWizardPage, private Ui::LanguageSelectionPage
    {
        Q_OBJECT
    public:
        LanguageSelectionPage(MainWizard *wizard);

        int nextId() const;

    private:
        MainWizard *mWizard;
    };
}

#endif // LANGUAGESELECTIONPAGE_HPP
