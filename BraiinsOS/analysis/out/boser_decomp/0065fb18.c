// FUN_0065fb18 @ 0065fb18 size=188 calls_out=3 calls_in=2
// strings: 

void FUN_0065fb18(undefined4 param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint local_140 [4];
  undefined4 uStack_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined1 uStack_120;
  undefined1 local_11f [255];
  
  FUN_01bed93e(&uStack_120,0,0x100);
  iVar3 = 0;
  uVar1 = 0;
  do {
    puVar4 = (uint *)(param_2 + (uVar1 >> 3 & 0x10));
    local_140[0] = *puVar4;
    local_140[1] = puVar4[1];
    local_140[2] = puVar4[2];
    local_140[3] = puVar4[3];
    uStack_130 = 0;
    local_124 = 0;
    local_128 = 0;
    local_12c = 0;
    if ((*(uint *)((int)local_140 + ((uVar1 & 0x60) >> 3)) >> (uVar1 & 0x1f) & 1) != 0) {
      if (iVar3 == 0xff) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01c03d08);
      }
      iVar3 = iVar3 + 1;
    }
    uVar2 = uVar1 + 1;
    local_11f[uVar1] = (char)iVar3;
    uVar1 = uVar2;
  } while (uVar2 != 0xff);
  FUN_01bed4e2(param_1,&uStack_120,0x100);
  return;
}

