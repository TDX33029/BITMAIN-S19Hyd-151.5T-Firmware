// FUN_00f46ec4 @ 00f46ec4 size=152 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_00f46ec4(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined1 auStack_58 [16];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int *local_1c;
  undefined1 local_17;
  
  local_1c = (int *)*param_1;
  do {
    iVar3 = *local_1c;
    bVar2 = (bool)hasExclusiveAccess(local_1c);
  } while (!bVar2);
  *local_1c = iVar3 + 1;
  if (iVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0xf46f58);
    (*pcVar1)();
  }
  local_48 = *param_3;
  uStack_44 = param_3[1];
  uStack_40 = param_3[2];
  uStack_3c = param_3[3];
  uStack_38 = param_3[4];
  local_34 = param_3[5];
  uStack_30 = param_3[6];
  uStack_2c = param_3[7];
  uStack_28 = param_3[8];
  uStack_24 = param_3[9];
  FUN_01bed4e2(auStack_58,param_2,0x10);
  local_17 = 0;
  iVar3 = thunk_FUN_01be5118(0x44);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x44);
  }
  FUN_01bed4e2(iVar3,auStack_58,0x44);
  return CONCAT44(&UNK_01c191e8,iVar3);
}

