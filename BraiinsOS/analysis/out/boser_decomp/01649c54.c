// FUN_01649c54 @ 01649c54 size=572 calls_out=4 calls_in=1
// strings: 

void FUN_01649c54(uint *param_1,uint *param_2,uint *param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  bool bVar4;
  char cVar3;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  undefined1 auStack_3c [12];
  uint local_30;
  uint uStack_2c;
  uint uStack_28;
  
  cVar3 = (char)param_3[3];
  if (cVar3 == '\x01') {
    uVar5 = param_2[1];
    uVar7 = param_2[2];
    uVar9 = param_2[3];
    *param_1 = *param_2;
    param_1[1] = uVar5;
    param_1[2] = uVar7;
    param_1[3] = uVar9;
    uVar5 = *param_3;
    uVar7 = param_3[1];
    goto LAB_01649e2c;
  }
  uVar5 = (uint)(byte)param_2[3];
  if (uVar5 == 0) {
    if (cVar3 == '\0') goto LAB_01649d08;
LAB_01649cc8:
    uVar7 = *param_3;
    uVar9 = *param_2;
    if (uVar9 < uVar7) {
      uVar8 = param_2[1];
      local_30 = *param_3;
      uStack_2c = param_3[1];
      uStack_28 = param_3[2];
      FUN_01646814(auStack_3c,&local_30,uVar8,param_2[2]);
      uVar7 = uVar9;
    }
    else {
      uVar8 = param_3[1];
      local_30 = *param_2;
      uStack_2c = param_2[1];
      uStack_28 = param_2[2];
      FUN_01646814(auStack_3c,&local_30,uVar8,param_3[2]);
    }
LAB_01649e68:
    FUN_0134aee0(uVar7,uVar8,4,4);
LAB_01649e84:
    FUN_016498e0(param_1,uVar5,auStack_3c);
    return;
  }
  if (uVar5 == 1) {
    uVar5 = param_3[1];
    uVar7 = param_3[2];
    *param_1 = *param_3;
    param_1[1] = uVar5;
    param_1[2] = uVar7;
    uVar1 = *(undefined1 *)((int)param_3 + 0xf);
    uVar2 = *(undefined2 *)((int)param_3 + 0xd);
    *(char *)(param_1 + 3) = '\x02' - cVar3;
    *(undefined2 *)((int)param_1 + 0xd) = uVar2;
    *(undefined1 *)((int)param_1 + 0xf) = uVar1;
  }
  else {
    if (cVar3 == '\0') goto LAB_01649cc8;
LAB_01649d08:
    uVar7 = param_3[2];
    uVar9 = param_2[2];
    bVar10 = uVar9 < uVar7;
    bVar4 = !bVar10 && uVar9 != uVar7;
    if (uVar9 == uVar7) {
      iVar6 = uVar9 << 2;
      do {
        uVar7 = param_3[1] + iVar6;
        if (iVar6 == 0) {
          cVar3 = '\0';
          if (param_3[1] != uVar7) {
            cVar3 = -1;
          }
          goto LAB_01649da8;
        }
        uVar8 = *(uint *)((param_2[1] - 4) + iVar6);
        iVar6 = iVar6 + -4;
        uVar7 = *(uint *)(uVar7 - 4);
        bVar10 = uVar8 < uVar7;
      } while (uVar8 == uVar7);
      bVar4 = false;
      if (!bVar10) {
        bVar4 = true;
      }
    }
    cVar3 = bVar4 - bVar10;
LAB_01649da8:
    if (cVar3 != '\0') {
      if (cVar3 == -1) {
        local_30 = *param_3;
        uStack_2c = param_3[1];
        uStack_28 = param_3[2];
        uVar7 = param_2[1];
        uVar8 = *param_2;
        FUN_016464c8(auStack_3c,&local_30,uVar7,uVar9);
        FUN_0134aee0(uVar8,uVar7,4,4);
        uVar5 = 2 - uVar5;
        goto LAB_01649e84;
      }
      uVar8 = param_3[1];
      local_30 = *param_2;
      uStack_2c = param_2[1];
      uStack_28 = param_2[2];
      uVar7 = *param_3;
      FUN_016464c8(auStack_3c,&local_30,uVar8);
      goto LAB_01649e68;
    }
    *param_1 = 0;
    param_1[1] = 4;
    param_1[2] = 0;
    param_1[3] = 1;
    FUN_0134aee0(*param_3,param_3[1],4,4);
  }
  uVar5 = *param_2;
  uVar7 = param_2[1];
LAB_01649e2c:
  FUN_0134aee0(uVar5,uVar7,4,4);
  return;
}

