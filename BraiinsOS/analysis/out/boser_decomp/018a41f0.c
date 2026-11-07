// FUN_018a41f0 @ 018a41f0 size=276 calls_out=3 calls_in=4
// strings: 

uint FUN_018a41f0(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int local_24;
  uint local_20;
  uint local_1c;
  
  iVar2 = param_1[4];
  if (iVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
    iVar1 = FUN_012fb940(iVar2,&DAT_0052d60c,1);
    if (iVar1 == 0) {
      if (param_3 == 0 && param_4 == 0) {
        uVar4 = FUN_012fb940(iVar2,"_",1);
        return uVar4;
      }
      uVar4 = param_1[5];
      if ((uint)-param_4 < (uint)(param_3 <= uVar4)) {
        uVar3 = uVar4 - param_3;
        uVar4 = -(param_4 + (uint)(uVar4 < param_3));
        if (uVar4 == 0 && (0x19 < uVar3) <= uVar4) {
          local_24 = uVar3 + 0x61;
          uVar4 = FUN_012fbb84(&local_24,iVar2);
        }
        else {
          iVar1 = FUN_012fb940(iVar2,"_",1);
          if (iVar1 != 0) {
            return 1;
          }
          local_20 = uVar3;
          local_1c = uVar4;
          uVar4 = FUN_012fd074(&local_20,iVar2);
        }
      }
      else {
        iVar2 = FUN_012fb940(iVar2,&DAT_005687f8,0x10);
        uVar4 = (uint)(iVar2 != 0);
        if (iVar2 == 0) {
          *(undefined1 *)(param_1 + 1) = 0;
          *param_1 = 0;
        }
      }
    }
  }
  return uVar4;
}

