// FUN_018bd26c @ 018bd26c size=232 calls_out=3 calls_in=2
// strings: 

void FUN_018bd26c(int *param_1,int param_2)

{
  int iVar1;
  int local_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int local_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  undefined1 uStack_25;
  
  FUN_01891fc4(&local_94,*(undefined4 *)(param_2 + 4),&uStack_25,&DAT_01d22700);
  iVar1 = local_94;
  if ((local_94 == 0) || (FUN_018906c4(&local_94), local_94 == 1)) {
    *param_1 = 0;
    return;
  }
  FUN_01bed4e2(param_1 + 0x10,&local_90,0x68);
  param_1[2] = local_90;
  param_1[3] = iStack_8c;
  param_1[4] = iStack_88;
  param_1[5] = iStack_84;
  param_1[6] = local_80;
  param_1[7] = iStack_7c;
  param_1[8] = iStack_78;
  param_1[9] = iStack_74;
  param_1[10] = local_70;
  param_1[0xb] = iStack_6c;
  param_1[0xc] = iStack_68;
  param_1[0xd] = iStack_64;
  param_1[0xe] = iStack_60;
  param_1[0xf] = iStack_60;
  *param_1 = param_2;
  param_1[1] = iVar1;
  return;
}

