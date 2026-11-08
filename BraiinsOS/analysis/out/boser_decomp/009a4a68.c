// FUN_009a4a68 @ 009a4a68 size=248 calls_out=2 calls_in=2
// strings: 

void FUN_009a4a68(undefined4 *param_1,undefined4 *param_2,undefined1 *param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint uVar4;
  int local_2c;
  undefined1 *local_28;
  uint local_24;
  
  if ((param_2[4] == param_2[5]) && ((uint)param_2[3] <= param_4)) {
    puVar3 = (undefined1 *)*param_2;
    uVar4 = param_2[1];
    if (uVar4 < param_4) {
      param_4 = uVar4;
    }
    if (param_4 == 1) {
      *param_3 = *puVar3;
    }
    else {
      FUN_01bed4e2(param_3,puVar3,param_4);
    }
    param_1[1] = param_4;
    *param_2 = puVar3 + param_4;
    param_2[1] = uVar4 - param_4;
    *(undefined1 *)param_1 = 4;
  }
  else {
    FUN_009a4b60(&local_2c,param_2);
    if (local_2c == 0) {
      if (local_24 < param_4) {
        param_4 = local_24;
      }
      if (param_4 == 1) {
        *param_3 = *local_28;
      }
      else {
        FUN_01bed4e2(param_3,local_28,param_4);
      }
      iVar1 = param_2[4];
      uVar2 = param_2[5];
      param_1[1] = param_4;
      *(undefined1 *)param_1 = 4;
      uVar4 = iVar1 + param_4;
      if (uVar2 < iVar1 + param_4) {
        uVar4 = uVar2;
      }
      param_2[4] = uVar4;
    }
    else {
      *param_1 = local_28;
      param_1[1] = local_24;
    }
  }
  return;
}

