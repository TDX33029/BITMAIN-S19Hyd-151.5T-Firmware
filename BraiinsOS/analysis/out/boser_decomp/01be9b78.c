// FUN_01be9b78 @ 01be9b78 size=184 calls_out=1 calls_in=15
// strings: 

void FUN_01be9b78(int param_1,uint param_2,int param_3,uint *param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint local_28;
  uint *local_24;
  
  software_interrupt(0);
  puVar3 = param_4;
  if (param_1 == -0x5c) {
    if (param_2 == 1) {
      if (param_3 < 0x41) {
        if (0x3e < param_3) {
          if (param_3 == 0x3f) {
            param_3 = 0x1d;
          }
          else {
            param_3 = 0x23;
          }
          software_interrupt(0);
        }
      }
      else {
        puVar3 = (uint *)(param_3 + -0x42);
        if (puVar3 < (uint *)0x2) {
          if (param_5 < 0x10) {
            param_1 = -0x16;
          }
          else {
            uVar1 = *param_4;
            iVar2 = param_4[1] + (uint)(0x7fffffff < uVar1);
            puVar4 = (uint *)param_4[2];
            if (iVar2 == 0) {
              if (param_3 == 0x42) {
                param_3 = 0x14;
              }
              else {
                param_3 = 0x15;
              }
              if (param_4[3] + (uint)((uint *)0x7fffffff < puVar4) != 0) {
                puVar4 = (uint *)(0x7fffffff - ((int)param_4[3] >> 0x1f));
              }
              param_2 = 1;
              software_interrupt(0);
              puVar3 = &local_28;
              local_28 = uVar1;
              local_24 = puVar4;
            }
            else {
              param_1 = -0x5f;
              param_2 = uVar1;
              param_3 = iVar2;
              puVar3 = puVar4;
            }
          }
        }
      }
    }
  }
  FUN_01be3b5a(param_1,param_2,param_3,puVar3);
  return;
}

