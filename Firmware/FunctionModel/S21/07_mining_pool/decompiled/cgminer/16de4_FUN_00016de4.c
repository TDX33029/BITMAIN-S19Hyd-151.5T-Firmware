// FUN_00016de4 @ 00016de4  size=284  callers=4
// program: cgminer


void FUN_00016de4(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char local_30 [16];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_30[4] = '\0';
  local_30[5] = '\0';
  local_30[6] = '\0';
  local_30[7] = '\0';
  local_30[0] = '\0';
  local_30[1] = '\0';
  local_30[2] = '\0';
  local_30[3] = '\0';
  local_30[8] = '\0';
  local_30[9] = '\0';
  local_30[10] = '\0';
  local_30[0xb] = '\0';
  local_30[0xc] = '\0';
  local_30[0xd] = '\0';
  local_30[0xe] = '\0';
  local_30[0xf] = '\0';
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  if (param_2 == (undefined4 *)0x0 || param_1 == 0) {
    return;
  }
  uVar1 = FUN_00048c28();
  uVar2 = FUN_000491bc("S");
  FUN_00049a4c(uVar1,"STATUS",uVar2);
  uVar2 = FUN_00049408(DAT_000685b0,DAT_000685b0 >> 0x1f);
  FUN_00049a4c(uVar1,&DAT_0004b268,uVar2);
  snprintf(local_30,0x10,"%s",(char *)*param_2);
  uVar2 = FUN_000491bc(local_30);
  FUN_00049a4c(uVar1,&DAT_0004b210,uVar2);
  snprintf((char *)&local_20,0x10,"%s",(char *)param_2[1]);
  uVar2 = FUN_000491bc(&local_20);
  FUN_00049a4c(uVar1,"api_version",uVar2);
  FUN_00049a4c(param_1,"STATUS",uVar1);
  return;
}

