// FUN_01be0850 @ 01be0850 size=302 calls_out=6 calls_in=2
// strings: Type matching not implemented | ProcessDescriptors | libunwind: %s - %s  | Invalid descriptor kind found. | ProcessDescriptors | libunwind: %s - %s 

void FUN_01be0850(int param_1,undefined4 param_2,int param_3,uint *param_4,uint param_5)

{
  undefined4 uVar1;
  undefined4 extraout_r1;
  undefined4 uVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  uint local_30;
  uint local_2c;
  
  local_2c = DAT_01d53560;
  uVar2 = param_2;
  if (((param_5 & 1) == 0) && (uVar5 = *param_4, uVar5 != 0)) {
    do {
      if (param_3 == 1) {
        uVar5 = (uint)(ushort)*param_4;
        puVar6 = param_4 + 1;
        uVar7 = (uint)*(ushort *)((int)param_4 + 2);
      }
      else {
        if (param_3 != 3) {
                    /* WARNING: Subroutine does not return */
          FUN_01be3310("false","/checkout/src/llvm-project/libunwind/src/Unwind-EHABI.cpp",0x6a,
                       "ProcessDescriptors");
        }
        uVar7 = param_4[1];
        puVar6 = param_4 + 2;
      }
      uVar4 = (uVar7 & 1) << 1 | uVar5 & 1;
      iVar8 = *(int *)(param_1 + 0x48);
      local_30 = param_5 & 1;
      FUN_01be0690(param_2,0,0xf,0,&local_30);
      param_4 = puVar6;
      uVar2 = extraout_r1;
      if (1 < uVar4) {
        if (uVar4 != 2) {
          pcVar3 = "Invalid descriptor kind found.";
LAB_01be0952:
          FUN_01beb3de(&DAT_01d50fd8,"libunwind: %s - %s\n","ProcessDescriptors",pcVar3);
          FUN_01beb1cc(&DAT_01d50fd8);
                    /* WARNING: Subroutine does not return */
          FUN_01be32a0();
        }
        uVar7 = (uVar7 & 0xfffffffe) + iVar8;
        param_4 = puVar6 + 1;
        if (uVar7 <= (local_30 & 0xfffffffe) &&
            (local_30 & 0xfffffffe) < (uVar5 & 0xfffffffe) + uVar7) {
          uVar5 = (*puVar6 & 0x40000000) << 1 | *puVar6 & 0x7fffffff;
          if (uVar5 == 0xffffffff) {
            uVar1 = 6;
          }
          else {
            if (uVar5 != 0xfffffffe) {
              pcVar3 = "Type matching not implemented";
              goto LAB_01be0952;
            }
            uVar1 = 9;
          }
          goto LAB_01be08fc;
        }
      }
      uVar5 = *param_4;
    } while (uVar5 != 0);
  }
  uVar1 = 8;
LAB_01be08fc:
  if ((DAT_01d53560 ^ local_2c) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar1,uVar2,DAT_01d53560 ^ local_2c,0);
  }
  return;
}

