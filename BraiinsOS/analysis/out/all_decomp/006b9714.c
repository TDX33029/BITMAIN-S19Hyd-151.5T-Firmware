// FUN_006b9714 @ 006b9714 size=528 calls_out=4 calls_in=2
// strings: 

char FUN_006b9714(int param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  char cVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 unaff_r11;
  undefined8 uVar9;
  int *local_2c;
  undefined1 local_28;
  
  cVar4 = '\0';
  if (*(char *)(param_1 + 8) == '\x01') {
    iVar7 = *(int *)(param_1 + 4);
    piVar5 = (int *)(iVar7 + 8);
    do {
      if (*piVar5 != 0) {
        ClearExclusiveLocal();
        FUN_015bf680(piVar5);
        goto LAB_006b9754;
      }
      bVar2 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar2);
    *piVar5 = 1;
    DataMemoryBarrier(0xb);
LAB_006b9754:
    uVar6 = 0;
    if ((DAT_018dd988 & 0x7fffffff) == 0) {
      cVar4 = *(char *)(iVar7 + 0xc);
    }
    else {
      uVar6 = FUN_015bf3f8();
      uVar6 = uVar6 ^ 1;
      cVar4 = *(char *)(iVar7 + 0xc);
    }
    if (cVar4 != '\0') {
      local_28 = (undefined1)uVar6;
      local_2c = piVar5;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_2c,&DAT_01858988,&DAT_018a4b30);
    }
    cVar1 = *(char *)(iVar7 + 0x18);
    if (cVar1 == '\0') {
      *(undefined1 *)(param_1 + 8) = 0;
      if (((uVar6 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
         (iVar3 = FUN_015bf3f8(), iVar3 == 0)) {
        *(undefined1 *)(iVar7 + 0xc) = 1;
      }
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *piVar5;
        bVar2 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar2);
      *piVar5 = 0;
      cVar4 = '\0';
    }
    else {
      if (param_2 == (int *)0x0) {
        uVar8 = 0;
        iVar3 = *(int *)(iVar7 + 0x10);
      }
      else {
        uVar9 = (*(code *)**(undefined4 **)*param_2)(((undefined4 *)*param_2)[1]);
        unaff_r11 = (undefined4)((ulonglong)uVar9 >> 0x20);
        uVar8 = (undefined4)uVar9;
        iVar3 = *(int *)(iVar7 + 0x10);
      }
      if (iVar3 != 0) {
        (**(code **)(iVar3 + 0xc))(*(undefined4 *)(iVar7 + 0x14));
      }
      *(undefined4 *)(iVar7 + 0x10) = uVar8;
      *(undefined4 *)(iVar7 + 0x14) = unaff_r11;
      if (((uVar6 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
         (iVar3 = FUN_015bf3f8(), iVar3 == 0)) {
        *(undefined1 *)(iVar7 + 0xc) = 1;
      }
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *piVar5;
        bVar2 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar2);
      *piVar5 = 0;
      cVar4 = '\x01';
    }
    if (iVar7 == 2) {
      FUN_016d6968(0xf0,piVar5,0x81,1);
      return cVar1;
    }
  }
  return cVar4;
}

