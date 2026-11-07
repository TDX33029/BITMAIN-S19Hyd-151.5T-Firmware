// FUN_00915d28 @ 00915d28 size=836 calls_out=7 calls_in=3
// strings: normal | boost

void FUN_00915d28(int *param_1,uint *param_2)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  int local_68;
  undefined4 local_64;
  int local_60;
  int local_5c;
  int iStack_58;
  int iStack_54;
  int local_50;
  int local_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  undefined1 local_38 [8];
  uint local_30;
  uint local_2c;
  undefined1 uStack_21;
  
  uVar5 = *param_2;
  uVar4 = uVar5 ^ 0x80000000;
  puVar6 = (uint *)0x0;
  uVar3 = 0x15;
  if ((int)uVar5 < 0) {
    uVar3 = uVar4;
  }
  if (1 < uVar3 - 0xc) {
    if (uVar3 != 0x15) {
      FUN_008f7634(&local_68);
      FUN_00f3ce3c(param_1,&local_68,&DAT_01887184,&DAT_018ab990);
      return;
    }
    if (param_2[2] != 1) {
      local_68 = CONCAT31(local_68._1_3_,0xb);
      FUN_00924358(param_1,&local_68,&DAT_0188717c,&DAT_018ab990);
      return;
    }
    param_2 = (uint *)param_2[1];
    puVar6 = param_2 + 4;
    uVar5 = *param_2;
    uVar4 = uVar5 ^ 0x80000000;
  }
  uVar3 = 0x15;
  if ((int)uVar5 < 0) {
    uVar3 = uVar4;
  }
  switch(uVar3) {
  case 1:
    uVar4 = (uint)(byte)param_2[1];
    uVar3 = 0;
    if (uVar4 != 0) {
      uVar3 = 1;
      if (uVar4 == 1) goto LAB_00915f78;
      local_2c = 0;
      local_30 = uVar4;
LAB_00915f20:
      local_38[0] = 1;
      uVar3 = FUN_00924358(&local_68,local_38,&DAT_0187d078,&DAT_018ab990);
      goto LAB_00915e60;
    }
    goto LAB_00915f30;
  default:
    uVar3 = FUN_008f7820(&local_68,param_2,&uStack_21,&DAT_018672e8);
    goto LAB_00915e60;
  case 4:
    uVar3 = param_2[2];
    uVar4 = param_2[3];
    if (uVar3 == 0 && uVar4 == 0) goto LAB_00915f30;
    if (uVar3 != 1 || uVar4 != 0) {
      local_30 = uVar3;
      local_2c = uVar4;
      goto LAB_00915f20;
    }
    goto LAB_00915f78;
  case 0xc:
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    if (uVar5 == 6) goto LAB_00915e24;
LAB_00915f54:
    if (uVar5 == 5) {
      iVar2 = thunk_FUN_016dd50a(uVar4,"boost",5);
      uVar3 = 0;
      if (iVar2 == 0) goto LAB_00915f78;
    }
    break;
  case 0xd:
    uVar4 = param_2[1];
    uVar5 = param_2[2];
    if (uVar5 != 6) goto LAB_00915f54;
LAB_00915e24:
    iVar2 = thunk_FUN_016dd50a(uVar4,"normal",6);
    uVar3 = 0;
    if (iVar2 == 0) goto LAB_00915f30;
    break;
  case 0xe:
    uVar3 = param_2[2];
    uVar4 = param_2[3];
    goto LAB_00915e50;
  case 0xf:
    uVar3 = param_2[1];
    uVar4 = param_2[2];
LAB_00915e50:
    uVar3 = FUN_00917858(&local_68,uVar3,uVar4);
    goto LAB_00915e60;
  }
  uVar3 = FUN_00924538(&local_68,uVar4,uVar5,&DAT_01867bb0,2);
LAB_00915e60:
  if (local_68 != 2) {
    *(undefined2 *)((int)param_1 + 5) = local_64._1_2_;
    *(undefined1 *)((int)param_1 + 7) = local_64._3_1_;
    param_1[3] = local_5c;
    param_1[4] = iStack_58;
    param_1[5] = iStack_54;
    param_1[6] = local_50;
    param_1[7] = local_4c;
    param_1[8] = iStack_48;
    param_1[9] = iStack_44;
    param_1[10] = iStack_40;
    param_1[0xb] = iStack_3c;
    param_1[2] = local_60;
    *(undefined1 *)(param_1 + 1) = (undefined1)local_64;
    *param_1 = local_68;
    return;
  }
  if ((local_64 & 1) == 0) {
LAB_00915f30:
    if (puVar6 != (uint *)0x0) {
      uVar3 = *puVar6;
    }
    if ((puVar6 != (uint *)0x0 && uVar3 != 0x80000012) &&
       (FUN_008f7820(&local_68,puVar6,&uStack_21,&DAT_018674a8), local_68 != 2)) {
LAB_00916078:
      *param_1 = local_68;
      param_1[1] = local_64;
      param_1[2] = local_60;
      param_1[3] = local_5c;
      param_1[4] = iStack_58;
      param_1[5] = iStack_54;
      param_1[6] = local_50;
      param_1[7] = local_4c;
      param_1[8] = iStack_48;
      param_1[9] = iStack_44;
      param_1[10] = iStack_40;
      param_1[0xb] = iStack_3c;
      return;
    }
    uVar1 = 0;
  }
  else {
LAB_00915f78:
    if (puVar6 != (uint *)0x0) {
      uVar3 = *puVar6;
    }
    if ((puVar6 != (uint *)0x0 && uVar3 != 0x80000012) &&
       (FUN_008f7820(&local_68,puVar6,&uStack_21,&DAT_018674a8), local_68 != 2)) goto LAB_00916078;
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 1) = uVar1;
  *param_1 = 2;
  return;
}

