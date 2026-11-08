// FUN_01be7afc @ 01be7afc size=158 calls_out=1 calls_in=2
// strings: 

/* WARNING: Removing unreachable block (ram,0x01be7b5e) */

void FUN_01be7afc(int param_1,int param_2,int param_3,undefined1 *param_4,uint *param_5)

{
  undefined1 local_28 [8];
  
  software_interrupt(0);
  if ((param_1 == -0x5c) && (param_2 == 1)) {
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
      param_4 = (undefined1 *)(param_3 - 0x42);
      if (param_4 < (undefined1 *)0x2) {
        if (*param_5 < 0x10) {
          FUN_01be3b5a(0xffffffea);
          return;
        }
        if (param_3 == 0x42) {
          param_3 = 0x14;
        }
        else {
          param_3 = 0x15;
        }
        param_4 = local_28;
        software_interrupt(0);
      }
    }
  }
  FUN_01be3b5a(param_1,param_2,param_3,param_4);
  return;
}

