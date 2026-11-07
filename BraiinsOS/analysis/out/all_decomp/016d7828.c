// FUN_016d7828 @ 016d7828 size=158 calls_out=1 calls_in=8
// strings: 

/* WARNING: Removing unreachable block (ram,0x016d788a) */

void FUN_016d7828(int param_1,int param_2,int param_3,undefined1 *param_4,uint *param_5)

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
      param_4 = (undefined1 *)(param_3 + -0x42);
      if (param_4 < &SUB_00000002) {
        if (*param_5 < 0x10) {
          FUN_016d3496(0xffffffea);
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
  FUN_016d3496(param_1,param_2,param_3,param_4);
  return;
}

