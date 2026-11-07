// FUN_015f4cf8 @ 015f4cf8 size=188 calls_out=2 calls_in=1
// strings: mio: | mio:

void FUN_015f4cf8(undefined4 param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  undefined4 local_44;
  undefined1 local_3d;
  undefined4 *local_3c;
  code *local_38;
  undefined1 *local_34;
  code *local_30;
  char *local_2c;
  undefined4 local_28;
  char *local_24;
  undefined4 local_20;
  undefined *local_1c;
  
  local_3d = 1;
  local_44 = param_4;
  if (4 < DAT_01d51b00) {
    local_34 = &local_3d;
    local_3c = &local_44;
    local_1c = &DAT_01cfdbb0;
    local_24 = "mio:";
    local_2c = "mio:";
    local_20 = 9;
    local_28 = 9;
    local_30 = FUN_01609ae4;
    local_38 = FUN_015d0bcc;
    FUN_015fb650(&DAT_005988d0,&local_3c,5,&local_2c);
  }
  FUN_01609e28(param_1,*(undefined4 *)(param_3 + 8),*param_2,param_4);
  return;
}

