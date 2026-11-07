// FUN_0004ee20 @ 0004ee20  size=112  callers=1
// program: bmminer


void FUN_0004ee20(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 local_18;
  ushort local_14;
  char local_12;
  undefined1 local_11;
  undefined4 local_10;
  undefined4 local_c;
  
  local_11 = (undefined1)((uint)(param_2 + 0x89) >> 8);
  local_12 = (byte)param_2 + 0x89;
  local_18 = 0x8306aa55;
  local_10 = 0;
  local_14 = (ushort)(byte)param_2;
  local_c = 0;
  iVar1 = FUN_0004e110(param_1,&local_18,8,&local_10,8);
  if (iVar1 != 0) {
    FUN_0004edd4(iVar1);
  }
  return;
}

