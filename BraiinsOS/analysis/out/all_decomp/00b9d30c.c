// FUN_00b9d30c @ 00b9d30c size=268 calls_out=4 calls_in=0
// strings: 

void FUN_00b9d30c(undefined8 *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined2 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;
  undefined8 *local_28;
  undefined8 **local_24;
  
  DataMemoryBarrier(0xb);
  if (DAT_018cd958 != 0) {
    local_24 = &local_28;
    local_28 = &DAT_018cd940;
    FUN_015eedc4(&DAT_018cd958,1,&local_24,&DAT_01870f44,&DAT_018ac9b8);
  }
  uVar7 = DAT_018cd957;
  uVar4 = DAT_018cd950;
  uVar3 = DAT_018cd94c;
  uVar8 = 0;
  bVar11 = 0x3ffffffe < DAT_018cd950;
  bVar10 = DAT_018cd950 == 0x3fffffff;
  uVar1 = DAT_018cd950 * 4;
  if (DAT_018cd950 < 0x40000000) {
    bVar11 = 0x7ffffffb < uVar1;
    bVar10 = uVar1 == 0x7ffffffc;
  }
  if (bVar11 && !bVar10) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,uVar1);
  }
  if (uVar1 == 0) {
    iVar9 = 4;
  }
  else {
    iVar9 = thunk_FUN_016d4a50(uVar1);
    uVar8 = uVar4;
    if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,uVar1);
    }
  }
  *(uint *)(param_1 + 1) = uVar8;
  *(int *)((int)param_1 + 0xc) = iVar9;
  FUN_016dd1aa(iVar9,uVar3,uVar1);
  uVar2 = DAT_018cd940;
  *(undefined1 *)(param_1 + 8) = 1;
  *(undefined2 *)((int)param_1 + 0x41) = 0x101;
  uVar5 = DAT_018cd954;
  *(undefined1 *)(param_1 + 6) = 2;
  uVar6 = DAT_018cd956;
  *(uint *)(param_1 + 2) = uVar4;
  *(undefined1 *)((int)param_1 + 0x43) = 0;
  *(undefined1 *)((int)param_1 + 0x17) = uVar7;
  *(undefined1 *)((int)param_1 + 0x16) = uVar6;
  *(undefined2 *)((int)param_1 + 0x14) = uVar5;
  *param_1 = uVar2;
  return;
}

