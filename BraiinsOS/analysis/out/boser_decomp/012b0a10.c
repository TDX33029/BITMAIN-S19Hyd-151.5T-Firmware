// FUN_012b0a10 @ 012b0a10 size=480 calls_out=3 calls_in=1
// strings: `Extensions` tracks values by type

void FUN_012b0a10(uint *param_1,uint param_2,uint param_3,uint param_4,undefined1 param_5)

{
  int *piVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  iVar8 = param_3 + 0x74;
  uVar9 = FUN_012b18a4(iVar8,param_2,0x762dd762,0xdf26fa8e,0xcda8e1e2,0x528a8711);
  piVar1 = (int *)uVar9;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)FUN_012b18a4(iVar8,(int)((ulonglong)uVar9 >> 0x20),0x5a5e8818,0x4088eed7,
                                 0x94267de6,0x17153295);
    uVar6 = 0;
    if (piVar1 != (int *)0x0) {
      puVar4 = (uint *)(*piVar1 + (*(int *)(piVar1[1] + 8) - 1U & 0xfffffff8) + 8);
      (**(code **)(piVar1[1] + 0xc))(&local_38,puVar4);
      if ((local_38 != 0x5a5e8818 || iStack_30 != -0x6bd9821a) ||
          (iStack_34 != 0x4088eed7 || iStack_2c != 0x17153295)) goto LAB_012b0bd8;
      uVar6 = *puVar4;
    }
    uVar5 = 100;
    if (uVar6 < 100) {
      uVar5 = uVar6;
    }
    if (uVar6 == 0) {
      uVar5 = 100;
    }
    if (piVar1 == (int *)0x0) {
      uVar5 = 100;
    }
  }
  else {
    puVar4 = (uint *)(*piVar1 + (*(int *)(piVar1[1] + 8) - 1U & 0xfffffff8) + 8);
    (**(code **)(piVar1[1] + 0xc))(&local_38,puVar4);
    if ((local_38 != 0x762dd762 || iStack_30 != -0x32571e1e) ||
        (iStack_34 != -0x20d90572 || iStack_2c != 0x528a8711)) {
LAB_012b0bd8:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("`Extensions` tracks values by type",0x22,&DAT_01ce268c);
    }
    uVar5 = *puVar4;
    if (uVar5 == 0) {
      uVar5 = 0xffffffff;
    }
  }
  uVar7 = *(uint *)(param_3 + 0x144);
  uVar6 = *(uint *)(param_3 + 0x148);
  puVar2 = (undefined *)FUN_012b9138(iVar8);
  param_1[4] = param_4;
  puVar3 = &DAT_00420598;
  if (puVar2 != (undefined *)0x0) {
    puVar3 = puVar2;
  }
  param_1[1] = param_2;
  param_1[2] = param_3;
  *(undefined1 *)((int)param_1 + 0x15) = param_5;
  *param_1 = uVar5;
  *(char *)(param_1 + 5) = (char)(((uVar7 | uVar6) & 0x3ffff) >> 0x11);
  param_1[3] = (uint)puVar3;
  return;
}

