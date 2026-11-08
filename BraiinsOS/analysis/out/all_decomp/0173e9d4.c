// FUN_0173e9d4 @ 0173e9d4 size=504 calls_out=5 calls_in=4
// strings: 

void FUN_0173e9d4(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined **ppuVar5;
  undefined **extraout_r1;
  undefined4 *puVar6;
  undefined **extraout_r1_00;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *local_74;
  undefined1 auStack_6c [64];
  uint local_2c;
  
  ppuVar5 = &PTR_018bc3f4;
  local_2c = DAT_018ddaf8;
  if ((param_2 != 0) && (*(byte *)(param_1 + 0x12e) - 1 < 2)) {
    iVar8 = param_1[1];
    puVar7 = param_1 + 2;
    uVar3 = FUN_0172a898(*param_1);
    iVar4 = (**(code **)(iVar8 + 0x10))(auStack_6c,puVar7);
    if (iVar4 == 0) {
LAB_0173ea9c:
      FUN_0177aaa0(auStack_6c,0x40);
    }
    else {
      puVar6 = param_1 + 0xca;
      if (puVar6 <= puVar7) {
        if ((puVar7 != puVar6) && (puVar7 < param_1 + 0x12e)) goto LAB_0173ebc8;
        FUN_016dd1aa(puVar7,puVar6,400);
        iVar4 = (**(code **)(param_1[1] + 0xc))(puVar7,auStack_6c,uVar3);
        if (iVar4 != 0) {
          iVar4 = (**(code **)(iVar8 + 0x10))(param_2,puVar7);
          goto LAB_0173eb28;
        }
        goto LAB_0173ea9c;
      }
      if (puVar6 < param_1 + 0x66) {
LAB_0173ebc8:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0,0x173ebc8);
        (*pcVar1)();
      }
      FUN_016dd1aa(puVar7,puVar6,400);
      iVar4 = (**(code **)(param_1[1] + 0xc))(puVar7,auStack_6c,uVar3);
      if (iVar4 == 0) goto LAB_0173ea9c;
      iVar4 = (**(code **)(iVar8 + 0x10))(param_2,puVar7);
      if (param_1 + 0x66 < puVar7) goto LAB_0173ebc8;
LAB_0173eb28:
      local_74 = param_1 + 0x66;
      FUN_016dd1aa(puVar7,local_74,400);
      *(undefined1 *)(param_1 + 0x12e) = 3;
      FUN_0177aaa0(auStack_6c,0x40);
      if (iVar4 != 0) {
        uVar2 = 1;
        ppuVar5 = extraout_r1_00;
        if (param_3 != (undefined4 *)0x0) {
          *param_3 = uVar3;
        }
        goto LAB_0173ea2c;
      }
    }
    FUN_0173dc48(param_1);
    ppuVar5 = extraout_r1;
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0;
    }
  }
  uVar2 = 0;
LAB_0173ea2c:
  if ((local_2c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(uVar2,ppuVar5,local_2c ^ DAT_018ddaf8,0);
  }
  return;
}

