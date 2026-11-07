// FUN_00017cb4 @ 00017cb4  size=264  callers=1
// program: bmminer


int FUN_00017cb4(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  char local_201c [8200];
  
  local_201c[0] = '\0';
  iVar2 = FUN_00017954(param_1,param_2 & 0xff);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  else {
    local_201c[1] = 0;
    iVar1 = (param_2 + param_1 * 2) * 8;
    local_201c[3] = 0;
    local_201c[2] = 1;
    FUN_00062ad0(*(undefined4 *)(&DAT_000bfad4 + iVar1),local_201c + 2,1,local_201c + 3,1,1);
    iVar2 = FUN_00062a08(*(undefined4 *)(&DAT_000bfad4 + iVar1),local_201c + 1,1,local_201c,1,1);
    if (iVar2 == 1) {
      iVar2 = (int)local_201c[0];
      if (4 < DAT_000be63c) {
        snprintf(local_201c + 4,0x2000,"%s we read lm75a fd : %d chain %d read temp %d",
                 "read_sensor_on_lm75a",*(int *)(&DAT_000bfad4 + iVar1),param_1,iVar2);
        FUN_0004948c(4,local_201c + 4,0);
        return (int)local_201c[0];
      }
    }
    else {
      iVar2 = 0xff;
    }
  }
  return iVar2;
}

