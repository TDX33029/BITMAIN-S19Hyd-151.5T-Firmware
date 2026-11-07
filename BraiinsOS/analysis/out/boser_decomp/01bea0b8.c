// FUN_01bea0b8 @ 01bea0b8 size=674 calls_out=9 calls_in=0
// strings: 

void FUN_01bea0b8(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int **ppiVar3;
  int *piVar4;
  code *pcVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  int *local_138;
  undefined1 auStack_134 [128];
  int local_b4 [36];
  
  iVar8 = 1;
  FUN_01bed93e(local_b4,0,0x8c);
  piVar6 = (int *)param_1[0x24];
  piVar7 = (int *)param_1[1];
  iVar9 = param_1[0x23];
  FUN_01bf01d6(*param_1);
  FUN_01bea748(auStack_134);
  do {
    if ((*piVar6 << 0x1d < 0) && (iVar1 = FUN_01bea972(piVar6 + 2,iVar8), iVar1 != 0)) {
LAB_01bea11a:
      local_b4[0] = 0;
LAB_01bea11c:
      FUN_01bea758(iVar8,local_b4,0);
    }
    else {
      iVar1 = FUN_01bea972(auStack_134,iVar8);
      if (iVar1 != 0) {
        if (iVar8 - 0x20U < 3) {
          local_b4[0] = 1;
          goto LAB_01bea11c;
        }
        FUN_01bea758(iVar8,0,local_b4);
        if (local_b4[0] != 1) goto LAB_01bea11a;
      }
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 != 0x41);
  iVar8 = *piVar6;
  piVar2 = (int *)(iVar8 * 0x1000000);
  if ((int)piVar2 < 0) {
    software_interrupt(0);
    local_138 = piVar2;
    if ((int)piVar2 < 0) goto LAB_01bea1d4;
    iVar8 = *piVar6;
  }
  if (iVar8 << 0x1e < 0) {
    piVar2 = (int *)0x0;
    software_interrupt(0);
    local_138 = (int *)0x0;
    iVar8 = *piVar6;
  }
  if (iVar8 << 0x1f < 0) {
    software_interrupt(0);
    software_interrupt(0);
    local_138 = piVar2;
    if (piVar2 != (int *)0x0) {
LAB_01bea1d4:
      local_138 = (int *)-(int)local_138;
      goto LAB_01bea1da;
    }
    software_interrupt(0);
    software_interrupt(0);
    local_138 = (int *)0x0;
  }
  if ((iVar9 != 0) && (piVar2 = *(int **)(iVar9 + 8), piVar2 != (int *)0x0)) {
    do {
      piVar4 = piVar2;
      piVar2 = (int *)*piVar4;
    } while ((int *)*piVar4 != (int *)0x0);
    do {
      if ((int *)piVar4[3] == piVar7) {
        software_interrupt(0);
        local_138 = piVar7;
        if ((int)piVar7 < 0) goto LAB_01bea1d4;
        software_interrupt(0);
      }
      switch(piVar4[2]) {
      case 1:
        software_interrupt(0);
        break;
      case 2:
        local_138 = (int *)piVar4[4];
        if (piVar7 != local_138) {
          if ((int *)piVar4[3] == local_138) {
            software_interrupt(0);
            software_interrupt(0);
            local_138 = (int *)piVar4[3];
          }
          else {
            software_interrupt(0);
          }
          goto joined_r0x01bea31a;
        }
        local_138 = (int *)0xfffffff7;
        goto LAB_01bea1d4;
      case 3:
        local_138 = piVar4 + 7;
        software_interrupt(0);
        if ((int)local_138 < 0) goto LAB_01bea1d4;
        if ((int *)piVar4[3] != local_138) {
          software_interrupt(0);
          if ((int)local_138 < 0) goto LAB_01bea1d4;
          software_interrupt(0);
        }
        break;
      case 4:
        software_interrupt(0);
        local_138 = piVar4 + 7;
        goto joined_r0x01bea31a;
      case 5:
        software_interrupt(0);
        local_138 = (int *)piVar4[3];
joined_r0x01bea31a:
        if ((int)local_138 < 0) goto LAB_01bea1d4;
      }
      piVar4 = (int *)piVar4[1];
    } while (piVar4 != (int *)0x0);
  }
  software_interrupt(0);
  if (*piVar6 << 0x1c < 0) {
    piVar2 = piVar6 + 0x22;
  }
  else {
    piVar2 = param_1 + 2;
  }
  FUN_01bef9e4(2,piVar2,0);
  pcVar5 = (code *)piVar6[0x44];
  if (pcVar5 == (code *)0x0) goto LAB_01bea368;
  do {
    (*pcVar5)(param_1[0x22],param_1[0x25],param_1[0x26]);
    uVar10 = FUN_01be3244();
    ppiVar3 = (int **)((ulonglong)uVar10 >> 0x20);
    local_138 = (int *)*(int *)uVar10;
    piVar6 = local_138;
    while (piVar6 != (int *)0x0) {
LAB_01bea1da:
      ppiVar3 = &local_138;
      software_interrupt(0);
      piVar6 = (int *)((uint)(piVar7 != (int *)0xffffffe0) & (uint)piVar7 >> 0x1f);
    }
    FUN_01bf01c2(0x7f,ppiVar3);
LAB_01bea368:
    pcVar5 = FUN_01be9e24 + 1;
  } while( true );
}

