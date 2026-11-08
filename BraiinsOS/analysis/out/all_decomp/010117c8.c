// FUN_010117c8 @ 010117c8 size=508 calls_out=8 calls_in=1
// strings: capacity overflow

/* WARNING: Removing unreachable block (ram,0x0101199c) */

void FUN_010117c8(uint *param_1,undefined4 param_2,uint param_3,undefined4 param_4,uint param_5,
                 uint param_6)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  if (0x7fffffff < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00600c10();
  }
  if (param_3 == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = thunk_FUN_016d4a50(param_3);
    if (uVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,param_3);
    }
  }
  FUN_016dd1aa(uVar1,param_2,param_3);
  uVar2 = 0;
  if ((int)param_5 < 0) {
LAB_01011830:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar2,param_5);
  }
  if (param_5 == 0) {
    uVar3 = 1;
  }
  else {
    uVar3 = thunk_FUN_016d4a50(param_5);
    if (uVar3 == 0) {
      uVar2 = 1;
      goto LAB_01011830;
    }
  }
  FUN_016dd1aa(uVar3,param_4,param_5);
  uVar6 = param_6 + 1;
  if (0xfffffffe < param_6) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("capacity overflow",0x23,&DAT_018af178);
  }
  uVar2 = 0;
  if (-1 < (int)uVar6) {
    uVar4 = thunk_FUN_016d4a50(uVar6);
    if (uVar4 != 0) {
      uVar7 = 0;
      if (param_6 != 0) {
        FUN_016dd606(uVar4,0x40,param_6);
        uVar7 = param_6;
      }
      uVar8 = uVar7 + 1;
      *(undefined1 *)(uVar4 + uVar7) = 0x40;
      if (uVar8 <= param_6) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(param_6,uVar8,&DAT_01882314);
      }
      *(undefined1 *)(uVar4 + param_6) = 0;
      puVar5 = (uint *)thunk_FUN_016d4a50(4);
      if (puVar5 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(4,4);
      }
      param_1[9] = uVar6;
      param_1[10] = uVar4;
      *puVar5 = param_6;
      param_1[8] = 1;
      param_1[0xb] = uVar8;
      *param_1 = param_3;
      param_1[1] = uVar1;
      param_1[2] = param_3;
      param_1[3] = param_5;
      param_1[4] = uVar3;
      param_1[5] = param_5;
      param_1[6] = 1;
      param_1[7] = (uint)puVar5;
      return;
    }
    uVar2 = 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00600af4(uVar2,uVar6);
}

