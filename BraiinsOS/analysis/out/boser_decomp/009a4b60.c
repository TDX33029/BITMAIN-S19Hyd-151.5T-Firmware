// FUN_009a4b60 @ 009a4b60 size=180 calls_out=2 calls_in=1
// strings: 

void FUN_009a4b60(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint uVar6;
  
  uVar4 = param_2[4];
  uVar6 = param_2[5];
  if (uVar4 == uVar6) {
    uVar2 = param_2[3];
    uVar3 = param_2[1];
    puVar5 = (undefined1 *)*param_2;
    uVar6 = uVar2;
    if (uVar3 < uVar2) {
      uVar6 = uVar3;
    }
    if (uVar6 == 1) {
      *(undefined1 *)param_2[2] = *puVar5;
    }
    else {
      FUN_01bed4e2((undefined1 *)param_2[2],puVar5,uVar6);
    }
    uVar4 = 0;
    *param_2 = puVar5 + uVar6;
    param_2[1] = uVar3 - uVar6;
    param_2[4] = 0;
    param_2[5] = uVar6;
  }
  else {
    uVar2 = param_2[3];
  }
  if ((uVar6 < uVar4) || (uVar2 < uVar6)) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(uVar4,uVar6,uVar2,&DAT_01c0c984);
  }
  iVar1 = param_2[2];
  *param_1 = 0;
  param_1[1] = iVar1 + uVar4;
  param_1[2] = uVar6 - uVar4;
  return;
}

