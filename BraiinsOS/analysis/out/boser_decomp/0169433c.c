// FUN_0169433c @ 0169433c size=264 calls_out=1 calls_in=3
// strings: 

void FUN_0169433c(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  byte bVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  
  uVar8 = param_2[-2];
  uVar9 = param_2[1];
  uVar10 = param_2[2];
  uVar3 = uVar8;
  if (uVar10 < uVar8) {
    uVar3 = uVar10;
  }
  uVar3 = FUN_01bed842(uVar9,param_2[-3],uVar3);
  if (uVar3 == 0) {
    uVar3 = uVar10 - uVar8;
  }
  if (uVar3 == 0) {
    bVar7 = *(byte *)(param_2 + 3);
    if (*(byte *)(param_2 + -1) <= bVar7) {
      return;
    }
  }
  else {
    if (uVar3 < 0x80000000) {
      return;
    }
    bVar7 = *(byte *)(param_2 + 3);
  }
  uVar2 = *(undefined2 *)((int)param_2 + 0xd);
  uVar1 = *(undefined1 *)((int)param_2 + 0xf);
  uVar5 = *param_2;
  do {
    while( true ) {
      puVar6 = param_2;
      param_2 = puVar6 + -4;
      *puVar6 = *param_2;
      puVar6[1] = puVar6[-3];
      puVar6[2] = puVar6[-2];
      puVar6[3] = puVar6[-1];
      if (param_2 == param_1) goto LAB_0169441c;
      uVar8 = puVar6[-6];
      uVar3 = uVar8;
      if (uVar10 < uVar8) {
        uVar3 = uVar10;
      }
      iVar4 = FUN_01bed842(uVar9,puVar6[-7],uVar3);
      if (iVar4 == 0) {
        iVar4 = uVar10 - uVar8;
      }
      if (iVar4 == 0) break;
      if (-1 < iVar4) goto LAB_0169441c;
    }
  } while ((int)(char)bVar7 < (int)(uint)*(byte *)(puVar6 + -5));
LAB_0169441c:
  *(byte *)(puVar6 + -1) = bVar7;
  puVar6[-4] = uVar5;
  puVar6[-3] = uVar9;
  puVar6[-2] = uVar10;
  *(undefined2 *)((int)puVar6 + -3) = uVar2;
  *(undefined1 *)((int)puVar6 + -1) = uVar1;
  return;
}

