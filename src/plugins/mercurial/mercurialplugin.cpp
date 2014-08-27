#include <vcsbase/vcsoutputwindow.h>
    const auto widgetCreator = []() { return new MercurialEditorWidget; };
        addAutoReleasedObject(new VcsEditorFactory(editorParameters + i, widgetCreator, m_client, describeSlot));
        VcsOutputWindow::appendError(tr("There are no changes to commit."));
        VcsBase::VcsOutputWindow::appendError(saver.errorString());
        VcsOutputWindow::appendError(tr("Unable to create an editor for the commit."));
    QTC_ASSERT(submitEditor(), return);
    Core::EditorManager::closeDocument(submitEditor()->document());
    MercurialEditorWidget editor;
    editor.setParameters(editorParameters + 2);
    MercurialEditorWidget editor;
    editor.setParameters(editorParameters);