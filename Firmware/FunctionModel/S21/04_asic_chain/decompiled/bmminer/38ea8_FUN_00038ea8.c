// FUN_00038ea8 @ 00038ea8  size=492  callers=1
// program: bmminer


void FUN_00038ea8(undefined1 param_1)

{
  int iVar1;
  int param3;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  undefined8 in_d0;
  int iVar4;
  float fVar5;
  undefined1 local_203c [4];
  undefined4 local_2038;
  undefined4 uStack_2034;
  char acStack_2030 [8192];
  
  fVar3 = floorf((float)((ulonglong)in_d0 >> 0x20) / 25.0);
  iVar4 = (int)((fVar3 * 25.0 - (float)in_d0) / 25.0);
  if (iVar4 < 1) {
    iVar4 = 0;
    iVar2 = FUN_0002a6f0(0);
    while( true ) {
      if (iVar2 != 0) {
        FUN_00081ee8(&local_2038,local_203c,0);
        uStack_2034._0_3_ = CONCAT12(local_203c[0],(undefined2)uStack_2034);
        FUN_0002d6b0(iVar4,1,0,param_1,local_2038);
        if (4 < DAT_000be63c) {
          snprintf(acStack_2030,0x2000,"chain = %d set freq to %.2f",iVar4,(double)(float)in_d0);
          FUN_0004948c(4,acStack_2030,0);
        }
      }
      iVar4 = iVar4 + 1;
      if (iVar4 == 4) break;
      iVar2 = FUN_0002a6f0(iVar4);
    }
  }
  else {
    iVar2 = 0;
    do {
      param3 = 0;
      fVar5 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x16) & 3);
      fVar5 = fVar3 * 25.0 - fVar5 * 25.0;
      do {
        iVar1 = FUN_0002a6f0(param3);
        if (iVar1 != 0) {
          FUN_00081ee8(fVar5,&local_2038,local_203c,0);
          uStack_2034._0_3_ = CONCAT12(local_203c[0],(undefined2)uStack_2034);
          FUN_0002d6b0(param3,1,0,param_1,local_2038);
          if (4 < DAT_000be63c) {
            snprintf(acStack_2030,0x2000,"chain = %d set freq to %.2f",param3,(double)fVar5);
            FUN_0004948c(4,acStack_2030,0);
          }
        }
        param3 = param3 + 1;
      } while (param3 != 4);
      iVar2 = iVar2 + 1;
      usleep(500000);
    } while (iVar2 != iVar4 + 1);
  }
  return;
}

