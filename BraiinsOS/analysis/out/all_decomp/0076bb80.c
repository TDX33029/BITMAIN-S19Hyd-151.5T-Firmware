// FUN_0076bb80 @ 0076bb80 size=220 calls_out=2 calls_in=3
// strings: 

void FUN_0076bb80(uint *param_1,uint *param_2,uint param_3,uint param_4)

{
  bool bVar1;
  undefined4 *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uStack_2c;
  
  puVar2 = (undefined4 *)thunk_FUN_016d4a50(0x10);
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x10);
  }
  *(undefined1 *)(puVar2 + 3) = 2;
  *puVar2 = 0;
  puVar3 = (uint *)thunk_FUN_016d4a50(0x24);
  if (puVar3 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x24);
  }
  *puVar3 = 1;
  puVar3[1] = 1;
  puVar3[2] = (uint)puVar2;
  puVar3[3] = (uint)puVar2;
  puVar3[4] = 0x80000000;
  puVar3[5] = 1;
  puVar3[6] = 0;
  puVar3[7] = uStack_2c;
  puVar3[8] = 0;
  do {
    uVar4 = *puVar3;
    uVar6 = uVar4 + 1;
    bVar1 = (bool)hasExclusiveAccess(puVar3);
  } while (!bVar1);
  *puVar3 = uVar6;
  uVar7 = 0;
  uVar5 = uVar4;
  if (uVar4 < 0x80000000) {
    uVar5 = *param_2;
    uVar6 = param_2[1];
    uVar7 = param_2[2];
    param_1[3] = (uint)puVar3;
  }
  if ((int)uVar4 < 0) {
    software_udf(0xfdee,0x76bc40);
    return;
  }
  *param_1 = uVar5;
  param_1[1] = uVar6;
  param_1[2] = uVar7;
  param_1[4] = param_3;
  param_1[5] = param_4;
  param_1[6] = (uint)puVar3;
  return;
}

