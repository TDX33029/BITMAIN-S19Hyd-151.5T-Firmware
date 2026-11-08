// FUN_01545ee0 @ 01545ee0 size=224 calls_out=4 calls_in=3
// strings: 

int FUN_01545ee0(undefined4 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint local_f8;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  uint local_50;
  undefined8 local_38;
  undefined8 local_30;
  
  local_f8 = local_f8 & 0xffffff00;
  uVar2 = FUN_015321a0();
  uVar3 = FUN_015321a0();
  local_a4 = FUN_015321a0();
  local_50 = local_f8;
  local_88 = *param_1;
  uStack_84 = param_1[1];
  uStack_80 = param_1[2];
  uStack_7c = param_1[3];
  local_78 = param_1[4];
  uStack_74 = param_1[5];
  uStack_70 = param_1[6];
  uStack_6c = param_1[7];
  uStack_68 = param_1[8];
  local_64 = param_1[9];
  uStack_60 = param_1[10];
  uStack_5c = param_1[0xb];
  uStack_58 = param_1[0xc];
  uStack_54 = param_1[0xd];
  local_a8 = 1;
  local_38 = uVar2;
  local_30 = uVar3;
  iVar1 = thunk_FUN_01be5118(0x80);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x80);
  }
  FUN_01bed4e2(iVar1,&local_a8,0x80);
  return iVar1;
}

