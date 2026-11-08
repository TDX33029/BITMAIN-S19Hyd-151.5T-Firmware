// FUN_0001e118 @ 0001e118  size=296  callers=2
// program: bmminer


undefined4 * FUN_0001e118(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  char local_2028 [8196];
  
  pcVar4 = FUN_00020018;
  iVar5 = 0;
  while( true ) {
    puVar1 = (undefined4 *)(*pcVar4)();
    iVar5 = iVar5 + 1;
    uVar2 = (*(code *)*puVar1)(puVar1,param_1,param_2,6);
    uVar3 = (*(code *)*puVar1)(puVar1,param_1,param_2,8);
    uVar2 = uVar2 | uVar3;
    if (-1 < (int)uVar2) {
      if (DAT_000bd314 == '\0') {
        if ((uVar2 & 2) != 0) {
          return puVar1;
        }
      }
      else if ((uVar2 & 6) == 6) {
        return puVar1;
      }
    }
    (*(code *)puVar1[0x4a])(puVar1);
    if (iVar5 == 3) break;
    pcVar4 = *(code **)(&UNK_0009a570 + iVar5 * 4);
  }
  if (DAT_000be63c < 4) {
    return (undefined4 *)0x0;
  }
  memset(local_2028,0,0x2000);
  builtin_strncpy(local_2028,"got nothing\n\n",0xe);
  FUN_0004a3a4(3,local_2028,0);
  return (undefined4 *)0x0;
}

