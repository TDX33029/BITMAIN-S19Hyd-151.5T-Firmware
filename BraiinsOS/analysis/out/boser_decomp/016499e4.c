// FUN_016499e4 @ 016499e4 size=544 calls_out=4 calls_in=1
// strings: 

void FUN_016499e4(uint *param_1,uint *param_2,uint *param_3)

{
  char cVar1;
  bool bVar3;
  char cVar2;
  char cVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  undefined1 auStack_3c [12];
  uint local_30;
  uint uStack_2c;
  uint uStack_28;
  
  cVar4 = (char)param_3[3];
  if (cVar4 == '\x01') {
    uVar5 = param_2[1];
    uVar7 = param_2[2];
    uVar8 = param_2[3];
    *param_1 = *param_2;
    param_1[1] = uVar5;
    param_1[2] = uVar7;
    param_1[3] = uVar8;
    uVar5 = *param_3;
    uVar7 = param_3[1];
    goto LAB_01649ba0;
  }
  cVar1 = (char)param_2[3];
  if (cVar1 == '\0') {
    if (cVar4 == '\0') goto LAB_01649aa8;
LAB_01649a38:
    uVar5 = param_3[2];
    uVar7 = param_2[2];
    bVar9 = uVar7 < uVar5;
    bVar3 = !bVar9 && uVar7 != uVar5;
    if (uVar7 == uVar5) {
      iVar6 = uVar7 << 2;
      do {
        uVar5 = param_3[1] + iVar6;
        if (iVar6 == 0) {
          cVar2 = '\0';
          if (param_3[1] != uVar5) {
            cVar2 = -1;
          }
          goto LAB_01649b1c;
        }
        uVar8 = *(uint *)((param_2[1] - 4) + iVar6);
        iVar6 = iVar6 + -4;
        uVar5 = *(uint *)(uVar5 - 4);
        bVar9 = uVar8 < uVar5;
      } while (uVar8 == uVar5);
      bVar3 = false;
      if (!bVar9) {
        bVar3 = true;
      }
    }
    cVar2 = bVar3 - bVar9;
LAB_01649b1c:
    if (cVar2 == '\0') {
      *param_1 = 0;
      param_1[1] = 4;
      param_1[2] = 0;
      param_1[3] = 1;
      FUN_0134aee0(*param_3,param_3[1],4,4);
      goto LAB_01649b9c;
    }
    if (cVar2 == -1) {
      local_30 = *param_3;
      uStack_2c = param_3[1];
      uStack_28 = param_3[2];
      uVar5 = param_2[1];
      uVar8 = *param_2;
      FUN_016464c8(auStack_3c,&local_30,uVar5,uVar7);
      FUN_0134aee0(uVar8,uVar5,4,4);
      goto LAB_01649bf8;
    }
    uVar7 = param_3[1];
    local_30 = *param_2;
    uStack_2c = param_2[1];
    uStack_28 = param_2[2];
    uVar5 = *param_3;
    FUN_016464c8(auStack_3c,&local_30,uVar7);
  }
  else {
    if (cVar1 == '\x01') {
      uVar5 = param_3[1];
      uVar7 = param_3[2];
      uVar8 = param_3[3];
      *param_1 = *param_3;
      param_1[1] = uVar5;
      param_1[2] = uVar7;
      param_1[3] = uVar8;
LAB_01649b9c:
      uVar5 = *param_2;
      uVar7 = param_2[1];
LAB_01649ba0:
      FUN_0134aee0(uVar5,uVar7,4,4);
      return;
    }
    if (cVar4 == '\0') goto LAB_01649a38;
LAB_01649aa8:
    uVar5 = *param_3;
    uVar8 = *param_2;
    if (uVar8 < uVar5) {
      uVar7 = param_2[1];
      local_30 = *param_3;
      uStack_2c = param_3[1];
      uStack_28 = param_3[2];
      FUN_01646814(auStack_3c,&local_30,uVar7,param_2[2]);
      uVar5 = uVar8;
    }
    else {
      uVar7 = param_3[1];
      local_30 = *param_2;
      uStack_2c = param_2[1];
      uStack_28 = param_2[2];
      FUN_01646814(auStack_3c,&local_30,uVar7,param_3[2]);
    }
  }
  FUN_0134aee0(uVar5,uVar7,4,4);
  cVar4 = cVar1;
LAB_01649bf8:
  FUN_016498e0(param_1,cVar4,auStack_3c);
  return;
}

