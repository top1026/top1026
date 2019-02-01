source ~/cscope_maps.vim

syntax on
"set compatible              " be iMproved, required
"filetype off                  " required

" set the runtime path to include Vundle and initialize
set rtp+=~/.vim/bundle/Vundle.vim
call vundle#begin()
" alternatively, pass a path where Vundle should install plugins
"call vundle#begin('~/some/path/here')
" let Vundle manage Vundle, required
Plugin 'VundleVim/Vundle.vim'
Plugin 'tpope/vim-fugitive'
Plugin 'git://git.wincent.com/command-t.git'
Plugin 'rstacruz/sparkup', {'rtp': 'vim/'}
Plugin 'ascenator/L9', {'name': 'newL9'}

Plugin 'scrooloose/nerdtree'
Plugin 'majutsushi/tagbar'
Plugin 'wesleyche/srcexpl'
Plugin 'AutoComplPop'
"Plugin 'altercation/vim-colors-solarized'
"Plugin 'scrooloose/syntastic'
Plugin 'vim-airline/vim-airline'
Plugin 'vim-airline/vim-airline-themes'
Plugin 'vcscommand.vim'
"Plugin 'shougo/unite.vim'
Plugin 'raimondi/delimitmate'
Plugin 'peterrincker/vim-argumentative'
Plugin 'foosoft/vim-argwrap'
Plugin 'shougo/vimproc.vim'
Plugin 'shougo/vimshell.vim'
Plugin 'scrooloose/nerdcommenter'
Plugin 'tommcdo/vim-lion'
Plugin 'nathanaelkane/vim-indent-guides'

" All of your Plugins must be added before the following line
call vundle#end()            " required
filetype plugin indent on    " required
" To ignore plugin indent changes, instead use:
"filetype plugin on
"
" Brief help
" :PluginList       - lists configured plugins
" :PluginInstall    - installs plugins; append `!` to update or just :PluginUpdate
" :PluginSearch foo - searches for foo; append `!` to refresh local cache
" :PluginClean      - confirms removal of unused plugins; append `!` to auto-approve removal
"
" see :h vundle for more details or wiki for FAQ
" Put your non-Plugin stuff after this line

set nu
set sw=4
set ts=4
set et
set mouse=a
set hlsearch
set cindent
set fileencodings=utf8,euc-kr
"set lcs=tab:\▒\ ,nbsp:%
"set lcs=tab:\▒\ ,nbsp:%
set lcs=tab:\:\ ,nbsp:%
"set lcs=tab:\:\·,nbsp:%
"set lcs=tab:\|\·,nbsp:%
set list

"set listchars=tab:›\ ,trail:•,extends:#,nbsp:.

"hi GroupA ctermbg=Gray
"hi GroupA ctermbg=LightGray
"hi GroupA ctermbg=DarkGrey
"hi GroupA ctermbg=Black
"hi GroupA ctermbg=White

"match GroupA /\t/
color peachpuff

"--------------------------------------------------"
"--------------------------------------------------"
"--------------------------------------------------"
" set Tag List
"--------------------------------------------------"
filetype on
map <f2> :TagbarToggle<cr>
map <f3> :SrcExplToggle<cr>
map <f4> :NERDTreeToggle<cr>

map <F5> :set mouse="a"<cr> :set nolist<cr>
map <F6> :set mouse=a<cr> :set list<cr>
map <F7> :set nu!<cr>
"map <F8> :set list!<cr>
map <F8> :VCSAnnotate<cr>
map <F9> :VCSLog <C-R>=expand("<cword>")<CR><cr>
"map <F9> glip/
"map <F9> :!mkcscp_rel<CR> :cs reset<CR>
"map <F12> :cs reset<CR>
":cs add ./cscope.out<CR>
map <F11> :!mkcscp_component<CR> :cs reset<cr>
map <F12> :!mkcscp_all<CR> :cs reset<cr>
"map << <,
"map >> >,
map "" \c<Space>

"--------------------------------------------------"
" set Source Explorer
"--------------------------------------------------"
nmap <c-h> <c-w>h
nmap <c-j> <c-w>j
nmap <c-k> <c-w>k
nmap <c-l> <c-w>l

nmap <c><Right> :VCSAnnotate<cr>

nmap <C-\>a :VCSAnnotate<cr> 
nmap <C-1> <f2> 

let g:SrcExpl_winHeight = 10
let g:SrcExpl_refreshTime = 100
let g:SrcExpl_jumpKey = "<enter>"
let g:SrcExpl_gobackKey = "<space>"
let g:SrcExpl_isUpdateTags = 0

"let g:lion_create_maps = 1
"let b:lion_squeeze_spaces = 0
"let g:lion_map_right = "gl"
"let g:lion_map_left = "gL"
"--------------------------------------------------"
" set NERD Tree
"--------------------------------------------------"
let NERDTreeWinPos = "left"
"--------------------------------------------------"
" vim option "
"--------------------------------------------------"
if &t_Co > 2 || has("gui_running")
	syntax on
	"    colorscheme ko2
endif

"--------------------------------------------------"
" AUtocomplepop 
"--------------------------------------------------"
function! InsertTabWrapper()
	let col = col('.')-1
	if !col || getline('.')[col-1]!~'\k'
		return "\<TAB>"
	else
		if pumvisible()
			return "\<C-N>"
		else
			return
			"\<C-N>\<C-P>"
		end
	endif
endfunction

inoremap <tab> <c-r>=InsertTabWrapper()<cr>

hi Pmenu ctermbg=blue
hi PmenuSel ctermbg=yellow ctermfg=black
hi PmenuSbar ctermbg=blue

"syntax enable 
"set background=dark
"let g:solarized_termcolors=16
"colorscheme solarized

"set statusline+=%#warningmsg#
"set statusline+=%{SyntasticStatuslineFlag()}
"set statusline+=%*

"--------------------------------------------------"
" Syntastic 
"--------------------------------------------------"
"let g:syntastic_always_populate_loc_list = 1
"let g:syntastic_auto_loc_list = 1
"let g:syntastic_check_on_open = 1
"let g:syntastic_check_on_wq = 0

"--------------------------------------------------"
" for vim-airline
"--------------------------------------------------"
"let g:airline#extensions#tabline#fnamemod = ':t'
"let g:airline#extensions#tabline#enabled = 1 " turn on buffer list
"set laststatus=2 " turn on bottom bar

"let g:airline_theme='hybrid'
"let g:airline_theme='term'
"let g:airline_theme='base16_summerfruit'

"nmap <silent> <C-n> :tabnext<CR>
"nmap <silent> <C-p> :tabprev<CR>
"imap <silent> <C-n> <esc><C-n>
"imap <silent> <C-p> <esc><C-p>
"nnoremap <C-t> :tabnew<Space>

"let g:indent_guides_auto_colors = 0
"autocmd VimEnter,Colorscheme * :hi IndentGuidesOdd  guibg=red   ctermbg=3
"autocmd VimEnter,Colorscheme * :hi IndentGuidesEven guibg=green ctermbg=4
"colorscheme desert256
"set background=dark
"
"let g:indent_guides_start_level = 2 
"let g:indent_guides_guide_size = 1 
"let g:indent_guides_enable_on_vim_startup = 1
"let g:indent_guides_color_change_percent = 0
"hi IndentGuidesOdd  ctermbg=black
"hi IndentGuidesEven ctermbg=darkgrey

