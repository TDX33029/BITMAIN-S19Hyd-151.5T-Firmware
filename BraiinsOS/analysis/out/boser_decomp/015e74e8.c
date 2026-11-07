// FUN_015e74e8 @ 015e74e8 size=404 calls_out=7 calls_in=1
// strings: 

undefined4 FUN_015e74e8(int *param_1,undefined4 param_2,int param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined1 auStack_88 [64];
  int local_48;
  int local_44;
  int local_40;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  sVar1 = (**(code **)(param_3 + 0x40))(param_2);
  uVar5 = 1;
  if (sVar1 == 0x21) {
    uVar9 = (**(code **)(param_3 + 0x1c))(param_2);
    iVar6 = (int)uVar9;
    (**(code **)((int)((ulonglong)uVar9 >> 0x20) + 0xc))(&local_30,iVar6);
    if ((local_30 == -0x3ec88446 && iStack_28 == -0x249b249d) &&
        (iStack_2c == 0x60d24636 && iStack_24 == 0x7ab693b4)) {
      if ((*(int *)(iVar6 + 0x48) == ((undefined4 *)*param_1)[1]) &&
         (iVar2 = thunk_FUN_01bed842(*(undefined4 *)(iVar6 + 0x44),*(undefined4 *)*param_1),
         iVar2 == 0)) {
        FUN_015e76ac(auStack_88,iVar6);
        iVar6 = ((undefined4 *)param_1[1])[1];
        if (iVar6 < 0) {
          uVar7 = 0;
LAB_015e75c8:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(uVar7,iVar6);
        }
        uVar5 = *(undefined4 *)param_1[1];
        if (iVar6 == 0) {
          iVar3 = 1;
          iVar2 = 0;
        }
        else {
          uVar7 = 1;
          iVar3 = FUN_01298504(iVar6,1);
          if (iVar3 == 0) goto LAB_015e75c8;
          iVar2 = iVar6;
        }
        FUN_01bed4e2(iVar3,uVar5,iVar6);
        FUN_0134bd64(local_48,local_44);
        piVar4 = (int *)param_1[2];
        iVar8 = piVar4[2];
        local_48 = iVar2;
        local_44 = iVar3;
        local_40 = iVar6;
        if (iVar8 == *piVar4) {
          FUN_015f5bd8(piVar4);
        }
        FUN_01bed4e2(iVar8 * 0x58 + piVar4[1],auStack_88,0x58);
        uVar5 = 0;
        piVar4[2] = iVar8 + 1;
      }
    }
  }
  return uVar5;
}

