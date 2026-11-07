// FUN_00039b8c @ 00039b8c  size=412  callers=1
// program: bmminer


bool FUN_00039b8c(undefined4 *param_1,int param_2,uint *param_3)

{
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint extraout_r3;
  uint uVar6;
  
  pvVar2 = (void *)*param_1;
  if (pvVar2 == (void *)0x0) {
    uVar4 = *param_3;
    *param_3 = uVar4 + 0x400;
    param_3[1] = param_3[1] + (uint)(0xfffffbff < uVar4);
    pvVar2 = calloc(1,0x400);
    uVar4 = extraout_r3;
    if (pvVar2 != (void *)0x0) {
      uVar4 = 0x400;
    }
    *param_1 = pvVar2;
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("stream->buf != NULL","miner_api/httpserver.h",0x2db,"hs_stream_read_socket");
    }
    param_1[4] = uVar4;
  }
  else {
    uVar4 = param_1[4];
  }
  do {
    uVar1 = read(param_2,(void *)((int)pvVar2 + param_1[5]),uVar4 - param_1[5]);
    uVar6 = param_1[5];
    if ((int)uVar1 < 1) {
      if ((uVar6 != param_1[4]) || (uVar6 == 0x800000)) goto LAB_00039c90;
LAB_00039c20:
      uVar4 = *param_3;
      uVar5 = param_3[1];
      *param_3 = uVar4 - uVar6;
      param_3[1] = uVar5 - (((int)uVar6 >> 0x1f) + (uint)(uVar4 < uVar6));
      uVar4 = param_1[4] * 2;
      if ((int)uVar4 < 0x800001) {
        param_1[4] = uVar4;
        uVar5 = (int)uVar4 >> 0x1f;
        uVar6 = uVar4;
      }
      else {
        param_1[4] = 0x800000;
        uVar6 = 0x800000;
      }
      uVar3 = *param_3;
      if (0x800000 < (int)uVar4) {
        uVar5 = 0;
      }
      *param_3 = uVar3 + uVar6;
      param_3[1] = param_3[1] + uVar5 + (uint)CARRY4(uVar3,uVar6);
      pvVar2 = realloc((void *)*param_1,param_1[4]);
      *param_1 = pvVar2;
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("stream->buf != NULL","miner_api/httpserver.h",0x2f4,"hs_stream_read_socket");
      }
      if ((int)uVar1 < 1) goto LAB_00039c90;
      uVar4 = param_1[4];
    }
    else {
      uVar5 = param_1[2];
      uVar6 = uVar1 + uVar6;
      uVar4 = param_1[4];
      param_1[5] = uVar6;
      param_1[2] = uVar5 + uVar1;
      param_1[3] = param_1[3] + ((int)uVar1 >> 0x1f) + (uint)CARRY4(uVar5,uVar1);
      if (uVar6 == uVar4) {
        if (uVar4 != 0x800000) goto LAB_00039c20;
LAB_00039c90:
        return uVar1 != 0;
      }
    }
    if (0x7fffff < (int)uVar4) goto LAB_00039c90;
    pvVar2 = (void *)*param_1;
  } while( true );
}

