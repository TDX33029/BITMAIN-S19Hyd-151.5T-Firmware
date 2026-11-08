// FUN_013a8a14 @ 013a8a14 size=208 calls_out=2 calls_in=0
// strings: 

byte FUN_013a8a14(int param_1,undefined4 param_2,int *param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = param_3[4];
  uVar4 = param_3[5];
  bVar1 = 0;
  if (uVar3 <= uVar4) {
    uVar5 = param_3[3];
    if (*param_3 - 1U < 2) {
      if (uVar3 < uVar5) {
        return *(byte *)(param_1 + (uint)*(byte *)(param_3[2] + uVar3)) & 1;
      }
    }
    else {
      if (uVar5 < uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar3,uVar4,uVar5,&DAT_01894828);
      }
      if (uVar4 != uVar3) {
        iVar2 = 0;
        while (*(char *)(param_1 + (uint)*(byte *)(param_3[2] + uVar3 + iVar2)) == '\0') {
          iVar2 = iVar2 + 1;
          if (uVar4 - uVar3 == iVar2) {
            return 0;
          }
        }
        bVar1 = 1;
        if (iVar2 + uVar3 == -1) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_003ceb44,0x25,&DAT_018935b8);
        }
      }
    }
  }
  return bVar1;
}

