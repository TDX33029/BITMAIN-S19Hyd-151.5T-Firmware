// FUN_013516b4 @ 013516b4 size=652 calls_out=1 calls_in=0
// strings: patternProperties | properties | additionalProperties | definitions | dependencies | allOf

void FUN_013516b4(undefined4 *param_1,int param_2,byte *param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  
  if (0x12 < *(int *)(param_2 + 8) - 2U) goto switchD_013516e0_caseD_6;
  piVar1 = *(int **)(param_2 + 4);
  switch(*(int *)(param_2 + 8)) {
  case 2:
    if ((short)*piVar1 != 0x6669) break;
    goto LAB_01351954;
  case 3:
    iVar2 = thunk_FUN_016dd50a(piVar1,"not",3);
    goto joined_r0x01351934;
  case 4:
    if ((*piVar1 == 0x65736c65) || (*piVar1 == 0x6e656874)) goto LAB_01351954;
    break;
  case 5:
    iVar2 = thunk_FUN_016dd50a(piVar1,"allOf",5);
    if (((iVar2 == 0) || (iVar2 = thunk_FUN_016dd50a(piVar1,"anyOf",5), iVar2 == 0)) ||
       (iVar2 = thunk_FUN_016dd50a(piVar1,"oneOf",5), iVar2 == 0)) {
      if (*param_3 == 4) goto LAB_01351970;
    }
    else {
      iVar2 = thunk_FUN_016dd50a(piVar1,&DAT_004146ea,5);
      if (iVar2 == 0) {
        if (*param_3 != 4) goto LAB_01351954;
LAB_01351970:
        iVar2 = *(int *)(param_3 + 8);
        iVar5 = *(int *)(param_3 + 0xc);
        *param_1 = 1;
        param_1[1] = iVar2;
        param_1[2] = iVar2 + iVar5 * 0x18;
        return;
      }
    }
    break;
  case 8:
    iVar2 = thunk_FUN_016dd50a(piVar1,&DAT_0056aa28,8);
    goto joined_r0x01351934;
  case 10:
    uVar6 = 10;
    pcVar4 = "properties";
    goto LAB_013517d8;
  case 0xb:
    uVar6 = 0xb;
    pcVar4 = "definitions";
    goto LAB_013517d8;
  case 0xc:
    uVar3 = thunk_FUN_016dd50a(piVar1,"dependencies",0xc);
    bVar8 = uVar3 == 0;
    if (bVar8) {
      uVar3 = (uint)*param_3;
    }
    if (bVar8 && uVar3 == 5) {
      iVar2 = *(int *)(param_3 + 4);
      uVar7 = *(undefined4 *)(param_3 + 8);
      uVar6 = *(undefined4 *)(param_3 + 0xc);
      if (iVar2 == 0) {
        uVar6 = 0;
      }
      param_1[9] = uVar6;
      uVar3 = (uint)(iVar2 != 0);
      param_1[2] = 0;
      param_1[3] = iVar2;
      param_1[4] = uVar7;
      param_1[5] = uVar3;
      param_1[1] = uVar3;
      param_1[6] = 0;
      param_1[7] = iVar2;
      param_1[8] = uVar7;
      *param_1 = 3;
      return;
    }
    break;
  case 0xd:
    iVar2 = thunk_FUN_016dd50a(piVar1,"propertyNames",0xd);
    goto joined_r0x013517a8;
  case 0xf:
    iVar2 = thunk_FUN_016dd50a(piVar1,"additionalItems",0xf);
joined_r0x01351934:
    if (iVar2 == 0) {
LAB_01351954:
      param_1[1] = param_3;
      *param_1 = 0;
      return;
    }
    break;
  case 0x11:
    uVar6 = 0x11;
    pcVar4 = "patternProperties";
LAB_013517d8:
    uVar3 = thunk_FUN_016dd50a(piVar1,pcVar4,uVar6);
    bVar8 = uVar3 == 0;
    if (bVar8) {
      uVar3 = (uint)*param_3;
    }
    if (bVar8 && uVar3 == 5) {
      iVar2 = *(int *)(param_3 + 4);
      uVar7 = *(undefined4 *)(param_3 + 8);
      uVar6 = *(undefined4 *)(param_3 + 0xc);
      if (iVar2 == 0) {
        uVar6 = 0;
      }
      *param_1 = 2;
      param_1[9] = uVar6;
      uVar3 = (uint)(iVar2 != 0);
      param_1[2] = 0;
      param_1[3] = iVar2;
      param_1[4] = uVar7;
      param_1[5] = uVar3;
      param_1[1] = uVar3;
      param_1[6] = 0;
      param_1[7] = iVar2;
      param_1[8] = uVar7;
      return;
    }
    break;
  case 0x14:
    iVar2 = thunk_FUN_016dd50a(piVar1,"additionalProperties",0x14);
joined_r0x013517a8:
    if (iVar2 != 0) break;
    goto LAB_01351954;
  }
switchD_013516e0_caseD_6:
  *param_1 = 4;
  return;
}

