// FUN_005ff430 @ 005ff430 size=168 calls_out=2 calls_in=2
// strings: 

void FUN_005ff430(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint local_40 [4];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  FUN_016dd606(param_1,0,0x100);
  uVar2 = 0;
  iVar1 = 0;
  do {
    puVar3 = (uint *)(param_2 + (uVar2 >> 3 & 0x10));
    local_40[0] = *puVar3;
    local_40[1] = puVar3[1];
    local_40[2] = puVar3[2];
    local_40[3] = puVar3[3];
    local_24 = 0;
    local_28 = 0;
    local_2c = 0;
    local_30 = 0;
    if ((*(uint *)((int)local_40 + ((uVar2 & 0x60) >> 3)) >> (uVar2 & 0x1f) & 1) != 0) {
      if (iVar1 == 0xff) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_01857448);
      }
      iVar1 = iVar1 + 1;
    }
    *(char *)(param_1 + 1 + uVar2) = (char)iVar1;
    uVar2 = uVar2 + 1;
  } while (uVar2 != 0xff);
  return;
}

