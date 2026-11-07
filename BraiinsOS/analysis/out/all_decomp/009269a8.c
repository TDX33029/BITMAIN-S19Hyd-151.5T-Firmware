// FUN_009269a8 @ 009269a8 size=1200 calls_out=2 calls_in=1
// strings: 

undefined4 FUN_009269a8(int param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 *local_40;
  undefined1 local_39;
  undefined4 *local_38;
  undefined *local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  int local_28;
  
  uVar2 = (**(code **)(param_3[1] + 0xc))(*param_3,&DAT_00418df9,1);
  if (param_2 != 0) {
    bVar7 = uVar2 == 0;
    uVar2 = 1;
    if (bVar7) {
      if ((*(byte *)((int)param_3 + 10) & 0x80) == 0) {
        local_38 = (undefined4 *)(param_1 + 0x30);
        uVar2 = FUN_00fb34b0(param_3,&DAT_0041439e,3,&DAT_004145fc,3,param_1,&LAB_00787c90,
                             &DAT_0056783c,4,param_1 + 0xc,FUN_01674bfc,&DAT_004143a1,10,
                             param_1 + 0x18,FUN_009261f8,&DAT_004143ab,0xc,&local_38,FUN_009459f4);
      }
      else {
        uVar2 = 1;
        iVar6 = (**(code **)(param_3[1] + 0xc))(*param_3,&DAT_0041950e,1);
        if (iVar6 == 0) {
          uVar2 = 1;
          local_48 = *param_3;
          local_44 = param_3[1];
          local_39 = 1;
          local_30 = param_3[2];
          uStack_2c = param_3[3];
          local_38 = &local_48;
          local_40 = &local_39;
          local_34 = &DAT_01880dc4;
          local_28 = param_1 + 0x30;
          iVar6 = FUN_00fb34b0(&local_38,&DAT_0041439e,3,&DAT_004145fc,3,param_1,&LAB_00787c90,
                               &DAT_0056783c,4,param_1 + 0xc,FUN_01674bfc,&DAT_004143a1,10,
                               param_1 + 0x18,FUN_009261f8,&DAT_004143ab,0xc,&local_28,FUN_009459f4)
          ;
          if (iVar6 == 0) {
            uVar2 = (**(code **)(local_34 + 0xc))(local_38,&DAT_00414a81,2);
          }
        }
      }
    }
    if (param_2 != 1) {
      iVar6 = param_2 * 0x48 + -0x48;
      do {
        iVar5 = param_1 + 0x48;
        uVar1 = uVar2 & 1;
        uVar2 = 1;
        if (uVar1 == 0) {
          if ((*(byte *)((int)param_3 + 10) & 0x80) == 0) {
            iVar3 = (**(code **)(param_3[1] + 0xc))(*param_3,&DAT_0041950f,2);
            uVar2 = 1;
            if (iVar3 == 0) {
              local_38 = (undefined4 *)(param_1 + 0x78);
              uVar2 = FUN_00fb34b0(param_3,&DAT_0041439e,3,&DAT_004145fc,3,iVar5,&LAB_00787c90,
                                   &DAT_0056783c,4,param_1 + 0x54,FUN_01674bfc,&DAT_004143a1,10,
                                   param_1 + 0x60,FUN_009261f8,&DAT_004143ab,0xc,&local_38,
                                   FUN_009459f4);
            }
          }
          else {
            local_48 = *param_3;
            local_44 = param_3[1];
            local_39 = 1;
            local_30 = param_3[2];
            uStack_2c = param_3[3];
            local_40 = &local_39;
            local_34 = &DAT_01880dc4;
            local_38 = &local_48;
            local_28 = param_1 + 0x78;
            iVar3 = FUN_00fb34b0(&local_38,&DAT_0041439e,3,&DAT_004145fc,3,iVar5,&LAB_00787c90,
                                 &DAT_0056783c,4,param_1 + 0x54,FUN_01674bfc,&DAT_004143a1,10,
                                 param_1 + 0x60,FUN_009261f8,&DAT_004143ab,0xc,&local_28,
                                 FUN_009459f4);
            if (iVar3 == 0) {
              uVar2 = (**(code **)(local_34 + 0xc))(local_38,&DAT_00414a81,2);
            }
            else {
              uVar2 = 1;
            }
          }
        }
        iVar6 = iVar6 + -0x48;
        param_1 = iVar5;
      } while (iVar6 != 0);
    }
  }
  uVar4 = 1;
  if (uVar2 == 0) {
    uVar4 = (**(code **)(param_3[1] + 0xc))(*param_3,&DAT_00418ec5,1);
  }
  return uVar4;
}

