// FUN_00094184 @ 00094184  size=676  callers=7
// program: bmminer


undefined4 *
FUN_00094184(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  
  puVar1 = calloc(1,0x20);
  if (puVar1 == (undefined4 *)0x0) {
    piVar2 = __errno_location();
    FUN_00095b4c(2,"src/thread.c",0x46,"calloc fail, errno[%d]",*piVar2);
  }
  else {
    *puVar1 = param_1;
    uVar3 = FUN_0008c4f4();
    puVar1[1] = uVar3;
    if (puVar1[1] == 0) {
      FUN_00095b4c(2,"src/thread.c",0x4e,"zlog_mdc_new fail");
    }
    else {
      uVar3 = FUN_0008b298(param_4);
      puVar1[2] = uVar3;
      if (puVar1[2] == 0) {
        FUN_00095b4c(2,"src/thread.c",0x54,"zlog_event_new fail");
      }
      else {
        uVar3 = FUN_0009656c(0x401,0x401,0);
        puVar1[3] = uVar3;
        if (puVar1[3] == 0) {
          FUN_00095b4c(2,"src/thread.c",0x5a,"zlog_buf_new fail");
        }
        else {
          uVar3 = FUN_0009656c(0x401,0x401,0);
          puVar1[4] = uVar3;
          if (puVar1[4] == 0) {
            FUN_00095b4c(2,"src/thread.c",0x60,"zlog_buf_new fail");
          }
          else {
            uVar3 = FUN_0009656c(0x401,0x401,0);
            puVar1[5] = uVar3;
            if (puVar1[5] == 0) {
              FUN_00095b4c(2,"src/thread.c",0x66,"zlog_buf_new fail");
            }
            else {
              uVar3 = FUN_0009656c(param_2,param_3,&DAT_000ac738);
              puVar1[6] = uVar3;
              if (puVar1[6] == 0) {
                FUN_00095b4c(2,"src/thread.c",0x6c,"zlog_buf_new fail");
              }
              else {
                uVar3 = FUN_0009656c(param_2,param_3,&DAT_000ac738);
                puVar1[7] = uVar3;
                if (puVar1[7] != 0) {
                  return puVar1;
                }
                FUN_00095b4c(2,"src/thread.c",0x72,"zlog_buf_new fail");
              }
            }
          }
        }
      }
    }
    FUN_00094030(puVar1);
  }
  return (undefined4 *)0x0;
}

