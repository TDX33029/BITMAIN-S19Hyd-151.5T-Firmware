// FUN_012bdba0 @ 012bdba0 size=408 calls_out=9 calls_in=1
// strings: 

undefined4 FUN_012bdba0(int param_1,undefined4 param_2,int *param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined **local_80;
  undefined *local_7c;
  undefined **local_78;
  undefined *local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined ***local_60;
  undefined *local_5c;
  int local_58;
  undefined1 *local_54;
  undefined ***local_50;
  undefined *local_4c;
  undefined1 local_48;
  undefined4 local_44;
  undefined4 *local_40;
  undefined4 local_3c;
  int **local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  puVar1 = (undefined *)FUN_012b9138(param_1 + 0x74);
  local_80 = &local_7c;
  local_74 = &DAT_00420598;
  if (puVar1 != (undefined *)0x0) {
    local_74 = puVar1;
  }
  local_7c = local_74 + 0x54;
  local_78 = &local_74;
  local_74 = local_74 + 0x46;
  uVar2 = FUN_012bc650(1);
  FUN_012bc780(uVar2,param_1);
  local_4c = &DAT_012b59c8;
  local_5c = &DAT_012b59c8;
  local_60 = &local_78;
  local_68 = 0;
  local_70 = 0;
  local_50 = &local_80;
  local_6c = 1;
  local_54 = &LAB_00632348;
  local_58 = param_2;
  FUN_012fa178(&local_70,&DAT_01ce25b4,&DAT_004204e2,&local_60);
  FUN_01bed4e2((uint)&local_60 | 3,param_2,0xc);
  local_34 = CONCAT31(local_34._1_3_,2);
  local_38 = (int **)CONCAT31(local_38._1_3_,1);
  FUN_01bed4e2((uint)&local_38 | 5,&local_60,0xf);
  local_40 = (undefined4 *)thunk_FUN_01be5118(0xc);
  if (local_40 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0xc);
  }
  *local_40 = local_70;
  local_40[1] = local_6c;
  local_40[2] = local_68;
  local_60 = (undefined ***)local_38;
  local_5c = (undefined *)local_34;
  local_58 = uStack_30;
  local_54 = (undefined1 *)uStack_2c;
  local_50 = (undefined ***)uStack_28;
  local_48 = 5;
  local_3c = 1;
  local_44 = 1;
  local_4c = (undefined *)CONCAT31(local_4c._1_3_,0xe);
  FUN_012bcd1c(uVar2,&local_60);
  if (*param_3 != -0x80000000) {
    local_5c = (undefined *)*param_3;
    local_58 = param_3[1];
    local_54 = (undefined1 *)param_3[2];
    local_60 = (undefined ***)CONCAT31(local_60._1_3_,4);
    FUN_012bca08(uVar2,0xf,&local_60);
  }
  return uVar2;
}

