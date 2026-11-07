// FUN_019b4130 @ 019b4130 size=544 calls_out=7 calls_in=6
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_019b4130(int *param_1,undefined4 param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined8 *puVar8;
  int *piVar9;
  undefined8 uVar10;
  int *piStack_30;
  undefined8 *puStack_2c;
  int iStack_28;
  
  uVar10 = thunk_FUN_01bee35a(param_1,0x244);
  piVar7 = (int *)((int)uVar10 + (int)((ulonglong)uVar10 >> 0x20));
  if ((char)piVar7[1] != '\x01') {
    if ((char)piVar7[1] == '\x02') {
      *param_1 = 0;
      param_1[1] = 4;
      param_1[2] = 0;
      param_1[3] = 0;
      return;
    }
    FUN_019a2bcc(piVar7,FUN_019b3c8c);
    *(undefined1 *)(piVar7 + 1) = 1;
  }
  piVar2 = (int *)*piVar7;
  piStack_30 = (int *)0x0;
  *piVar7 = 0;
  if (piVar2 != (int *)0x0) {
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + 1;
    if (iVar3 < 0) {
      software_udf(0xfdee,0x19b434c);
      return;
    }
    piStack_30 = (int *)*piVar7;
  }
  *piVar7 = (int)piVar2;
  FUN_019b3d30(&piStack_30);
  if (piStack_30 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piStack_30;
      bVar1 = (bool)hasExclusiveAccess(piStack_30);
    } while (!bVar1);
    *piStack_30 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_019b3e50(&piStack_30);
    }
  }
  puVar8 = (undefined8 *)&SUB_00000004;
  iVar3 = 0;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    iVar5 = piVar2[4];
    uVar10 = (**(code **)(piVar2[3] + 0x14))(piVar2[2],param_2);
    if ((int)uVar10 != 0) {
      puVar8 = (undefined8 *)thunk_FUN_01be5118(0x20);
      if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(4,0x20);
      }
      iVar3 = 1;
      *puVar8 = uVar10;
      iStack_28 = 1;
      piStack_30 = (int *)0x4;
      piVar7 = (int *)0x4;
      if (iVar5 != 0) {
        piVar7 = (int *)0x0;
        puStack_2c = puVar8;
        do {
          puVar6 = (undefined4 *)(iVar5 + 8);
          piVar9 = (int *)(iVar5 + 0xc);
          iVar5 = *(int *)(iVar5 + 0x10);
          uVar10 = (**(code **)(*piVar9 + 0x14))(*puVar6,param_2);
          if ((int)uVar10 == 0) {
            iVar3 = (int)piVar7 + 1;
            break;
          }
          piVar9 = (int *)((int)piVar7 + 1);
          if (piVar9 == piStack_30) {
            uVar4 = 2;
            if (iVar5 == 0) {
              uVar4 = 1;
            }
            FUN_0197ac30(&piStack_30,piVar9,uVar4,4);
            puVar8 = puStack_2c;
          }
          iVar3 = (int)piVar7 + 2;
          puVar8[(int)piVar7 + 1] = uVar10;
          piVar7 = piVar9;
          iStack_28 = iVar3;
        } while (iVar5 != 0);
        piVar7 = piStack_30;
        puVar8 = puStack_2c;
      }
      goto LAB_019b432c;
    }
  }
  piVar7 = (int *)0x0;
LAB_019b432c:
  *param_1 = (int)piVar7;
  param_1[1] = (int)puVar8;
  param_1[2] = iVar3;
  param_1[3] = (int)piVar2;
  return;
}

