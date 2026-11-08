// FUN_006e1e38 @ 006e1e38 size=280 calls_out=2 calls_in=3
// strings: 

int FUN_006e1e38(int param_1,int param_2,int param_3,uint param_4,undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  
  param_4 = param_4 >> 3;
  if (param_4 != 0) {
    param_1 = FUN_006e1e38(param_1,param_1 + param_4 * 0x30,param_4 * 0x54 + param_1,param_4,param_5
                          );
    param_2 = FUN_006e1e38(param_2,param_2 + param_4 * 0x30,param_4 * 0x54 + param_2,param_4,param_5
                          );
    param_3 = FUN_006e1e38(param_3,param_3 + param_4 * 0x30,param_4 * 0x54 + param_3,param_4,param_5
                          );
  }
  iVar1 = FUN_006d2464(*(undefined4 *)*param_5,*(undefined4 *)(param_1 + 4),
                       *(undefined4 *)(param_1 + 8),*(undefined4 *)(param_2 + 4),
                       *(undefined4 *)(param_2 + 8));
  iVar2 = FUN_006d2464(*(undefined4 *)*param_5,*(undefined4 *)(param_1 + 4),
                       *(undefined4 *)(param_1 + 8),*(undefined4 *)(param_3 + 4),
                       *(undefined4 *)(param_3 + 8));
  if (iVar1 == iVar2) {
    iVar2 = FUN_006d2464(*(undefined4 *)*param_5,*(undefined4 *)(param_2 + 4),
                         *(undefined4 *)(param_2 + 8),*(undefined4 *)(param_3 + 4),
                         *(undefined4 *)(param_3 + 8));
    param_1 = param_2;
    if (iVar1 != iVar2) {
      param_1 = param_3;
    }
  }
  return param_1;
}

