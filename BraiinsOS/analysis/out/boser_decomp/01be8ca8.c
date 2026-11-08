// FUN_01be8ca8 @ 01be8ca8 size=152 calls_out=3 calls_in=1
// strings: 

int FUN_01be8ca8(undefined4 param_1,undefined4 param_2,undefined2 param_3,undefined1 param_4,
                code *param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int local_2020;
  undefined2 local_201c;
  undefined2 local_201a;
  undefined4 local_2018;
  undefined1 local_2010;
  
  FUN_01bed93e(&local_2020,0,0x14);
  local_2020 = 0x14;
  local_201a = 0x301;
  local_201c = param_3;
  local_2018 = param_2;
  local_2010 = param_4;
  iVar1 = FUN_01be9b18(param_1,&local_2020,0x14,0);
  if (-1 < iVar1) {
    while (iVar1 = FUN_01be8da0(param_1,&local_2020,0x2000,0x40), 0 < iVar1) {
      for (piVar3 = &local_2020; 0xf < (uint)((int)&local_2020 + (iVar1 - (int)piVar3));
          piVar3 = (int *)((int)piVar3 + (*piVar3 + 3U & 0xfffffffc))) {
        if ((short)piVar3[1] == 3) {
          return 0;
        }
        if ((short)piVar3[1] == 2) goto LAB_01be8d30;
        iVar2 = (*param_5)(param_6,piVar3);
        if (iVar2 != 0) {
          return iVar2;
        }
      }
    }
LAB_01be8d30:
    iVar1 = -1;
  }
  return iVar1;
}

