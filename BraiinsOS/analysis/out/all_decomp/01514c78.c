// FUN_01514c78 @ 01514c78 size=220 calls_out=4 calls_in=1
// strings: 

void FUN_01514c78(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  int local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  
  uVar4 = param_2[1];
  uVar3 = param_2[2];
  if (uVar4 - uVar3 < 4) {
    *(undefined1 *)param_1 = 0xc;
    param_1[1] = &DAT_00410f5a;
    param_1[2] = 3;
    return;
  }
  uVar2 = uVar3 + 4;
  bVar6 = 0xfffffffa < uVar3;
  bVar5 = uVar3 == 0xfffffffb;
  if (uVar3 < 0xfffffffc) {
    bVar6 = uVar4 <= uVar2;
    bVar5 = uVar2 == uVar4;
  }
  param_2[2] = uVar2;
  if (bVar6 && !bVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar3,uVar2,uVar4,&DAT_018a78f8);
  }
  uVar3 = *(uint *)(*param_2 + uVar3);
  FUN_01540ae4(&local_28);
  if (local_28 == 1) {
    *param_1 = uStack_24;
    param_1[1] = uStack_20;
    param_1[2] = local_1c;
    return;
  }
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x14);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x14);
  }
  *puVar1 = 1;
  puVar1[1] = 1;
  puVar1[2] = uStack_24;
  puVar1[3] = uStack_20;
  puVar1[4] = local_1c;
  param_1[1] = puVar1;
  param_1[2] = uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 |
               uVar3 >> 0x18;
  *(undefined1 *)param_1 = 0x18;
  return;
}

