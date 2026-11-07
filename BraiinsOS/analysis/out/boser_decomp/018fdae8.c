// FUN_018fdae8 @ 018fdae8 size=368 calls_out=7 calls_in=0
// strings: 

undefined8 FUN_018fdae8(undefined4 param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 *local_2c;
  undefined1 uStack_25;
  
  uVar6 = param_2[8];
  if (0x20 < uVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,uVar6,0x20,&DAT_01d2575c);
  }
  DataMemoryBarrier(0xb);
  if (DAT_01d51afc != '\x02') {
    FUN_0188ff90();
  }
  if (uVar6 != 0x20) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&uStack_25,&DAT_01d24b88,&DAT_01d24b34);
  }
  if (param_4 != 0xc) {
                    /* WARNING: Subroutine does not return */
    FUN_013070f0(0xc,param_4,&DAT_01d256d4);
  }
  uVar2 = param_2[1];
  uVar3 = param_2[6];
  local_2c = (undefined4 *)0x0;
  uVar9 = param_2[2];
  uVar10 = param_2[3];
  uVar11 = param_2[4];
  uVar7 = *param_2;
  uVar8 = param_2[5];
  uVar5 = param_2[7];
  iVar4 = FUN_01be5878(&local_2c,0x10,0x230);
  puVar1 = local_2c;
  if ((iVar4 != 0) || (local_2c == (undefined4 *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(0x10,0x230);
  }
  *local_2c = 1;
  local_2c[1] = uVar7;
  local_2c[0x84] = &DAT_01d27584;
  local_2c[2] = uVar2;
  local_2c[3] = uVar9;
  local_2c[4] = uVar10;
  local_2c[5] = uVar11;
  local_2c[7] = uVar3;
  local_2c[8] = uVar5;
  local_2c[6] = uVar8;
  FUN_01bed4e2(local_2c + 0x88,param_3,0xc);
  iVar4 = 0;
  do {
    *(undefined1 *)((int)param_2 + iVar4) = 0;
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0x20);
  return CONCAT44(&UNK_01d24b44,puVar1);
}

