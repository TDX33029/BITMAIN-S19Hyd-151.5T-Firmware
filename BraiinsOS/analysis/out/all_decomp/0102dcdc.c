// FUN_0102dcdc @ 0102dcdc size=804 calls_out=7 calls_in=0
// strings: 

undefined8 FUN_0102dcdc(int param_1,undefined4 ***param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 ***pppuVar3;
  char cVar4;
  undefined4 **ppuVar5;
  undefined4 ***pppuVar6;
  undefined4 ***local_84;
  undefined4 ****local_80;
  undefined4 ****ppppuStack_7c;
  undefined4 **local_78;
  int local_74;
  int local_70;
  undefined4 uStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  undefined4 ****local_60;
  undefined4 ****local_5c;
  undefined4 **local_58;
  int iStack_54;
  int local_50;
  undefined4 local_4c;
  int local_48;
  undefined4 uStack_44;
  undefined4 ****local_3c;
  undefined4 **local_38;
  undefined4 *local_34;
  undefined4 ****local_30;
  undefined4 ****local_2c;
  undefined4 **local_28;
  
  cVar4 = DAT_018dd947;
  iVar2 = DAT_018da8c0;
  uVar1 = 1;
  if (!SCARRY4(*(int *)(param_1 + 0x50),(int)param_2)) {
    local_48 = DAT_018da8c0;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + (int)param_2;
    local_58 = (undefined4 **)0x2;
    local_84 = param_2;
    if (DAT_018dd947 == '\0') {
      if (*(int *)(iVar2 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_018a48f4,cVar4);
      }
      local_2c = &local_84;
      local_30 = &local_80;
      local_3c = &local_30;
      local_34 = (undefined4 *)(iVar2 + 0x1c);
      local_80 = (undefined4 ****)*local_34;
      local_70 = 0;
      ppppuStack_7c = *(undefined4 *****)(iVar2 + 0x20);
      local_78 = *(undefined4 ***)(iVar2 + 0x24);
      local_74 = *(undefined4 *)(iVar2 + 0x28);
      local_38 = (undefined4 **)0x1;
      local_28 = (undefined4 **)&DAT_018a4904;
      FUN_01694880(&local_60,&local_3c);
    }
    local_80 = local_60;
    ppppuStack_7c = local_5c;
    local_78 = local_58;
    local_74 = iStack_54;
    local_70 = local_50;
    uStack_6c = local_4c;
    iStack_68 = local_48;
    uStack_64 = uStack_44;
    if (local_58 != (undefined4 **)0x2) {
      if (((uint)local_58 & 1) != 0) {
        iStack_54 = iStack_54 + (*(int *)(local_50 + 8) - 1U & 0xfffffff8) + 8;
      }
      (**(code **)(local_50 + 0x30))(iStack_54,&local_80);
    }
    iVar2 = *(int *)(param_1 + 0x54);
    if (!SCARRY4(iVar2,(int)local_84)) {
      *(int *)(param_1 + 0x54) = iVar2 + (int)local_84;
      iVar2 = iVar2 + (int)local_84;
    }
    if (0 < iVar2) {
      pppuVar6 = &local_38;
      do {
        FUN_0101ac50(&local_30,param_1 + 0x1c,param_3);
        if (local_30 == (undefined4 ****)0x0) break;
        local_60 = local_30;
        local_58 = local_28;
        local_5c = local_2c;
        local_38 = local_28;
        local_3c = local_2c;
        if (((local_30[0xe] <= local_2c) ||
            (pppuVar3 = local_30[0xd] + (int)local_2c * 0x3e,
            *pppuVar3 == (undefined4 **)0x3 && pppuVar3[1] == (undefined4 **)0x0)) ||
           (pppuVar3[0x35] != local_28)) goto LAB_0102dfd8;
        cVar4 = *(byte *)(pppuVar3 + 8) - 6;
        if (*(byte *)(pppuVar3 + 8) < 6) {
          cVar4 = '\x06';
        }
        if (((cVar4 == '\x03' || cVar4 == '\x05') && (*(char *)((int)pppuVar3 + 0x21) != '\0')) ||
           (pppuVar3[0x38] != (undefined4 **)0x0)) {
          if (local_30[0xe] <= local_2c) {
LAB_0102dfd8:
            local_2c = (undefined4 ****)FUN_0101a4ac;
            local_30 = (undefined4 ****)pppuVar6;
                    /* WARNING: Subroutine does not return */
            FUN_00faa478(&DAT_00599806,&local_30,&DAT_01882550);
          }
          pppuVar3 = local_30[0xd] + (int)local_2c * 0x3e;
          if ((*pppuVar3 == (undefined4 **)0x3 && pppuVar3[1] == (undefined4 **)0x0) ||
             (pppuVar3[0x35] != local_28)) goto LAB_0102dfd8;
          ppuVar5 = pppuVar3[6];
          FUN_0101d22c(param_1 + 8,&local_60,pppuVar3[0x35],pppuVar3[1],pppuVar6);
          FUN_0102e068(param_4,&local_60,ppuVar5 != (undefined4 **)&DAT_3b9aca00);
        }
      } while (0 < *(int *)(param_1 + 0x54));
    }
    if (local_78 != (undefined4 **)0x2) {
      iVar2 = local_74;
      if (((uint)local_78 & 1) != 0) {
        iVar2 = local_74 + (*(int *)(local_70 + 8) - 1U & 0xfffffff8) + 8;
      }
      (**(code **)(local_70 + 0x34))(iVar2,&local_80);
    }
    FUN_005c3320(&local_80);
    uVar1 = 0;
  }
  return CONCAT44(3,uVar1);
}

