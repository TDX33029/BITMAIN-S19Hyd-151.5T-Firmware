// FUN_019b000c @ 019b000c size=196 calls_out=1 calls_in=2
// strings: 

longlong FUN_019b000c(char *param_1,int param_2)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  char local_44 [4];
  short *local_40;
  int local_3c;
  char *local_28;
  int local_24;
  undefined1 local_20;
  undefined2 local_c;
  undefined1 local_a;
  
  local_a = false;
  if (param_2 != 0) {
    local_a = *param_1 == '/';
  }
  local_c = 0x201;
  local_20 = 6;
  local_28 = param_1;
  local_24 = param_2;
  FUN_01982524(local_44,&local_28);
  psVar1 = (short *)0x0;
  if ((local_44[0] == '\t') && ((psVar1 = local_40, local_3c != 2 || (*local_40 != 0x2e2e)))) {
    iVar3 = local_3c;
    while (iVar2 = iVar3, (short *)((int)local_40 + iVar2) != local_40) {
      iVar3 = iVar2 + -1;
      if (*(char *)((int)local_40 + iVar2 + -1) == '.') {
        iVar3 = 0;
        if (iVar2 + -1 != 0) {
          iVar3 = (int)local_40 + iVar2;
        }
        return CONCAT44(local_3c - iVar2,iVar3);
      }
    }
  }
  return ZEXT48(psVar1) << 0x20;
}

