// FUN_0165dac4 @ 0165dac4 size=488 calls_out=4 calls_in=2
// strings: 

void FUN_0165dac4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint unaff_r8;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_2c = 0;
  local_38 = param_2;
  uStack_34 = param_3;
  local_30 = param_3;
  uVar7 = FUN_0165f33c(&local_38,3);
  if ((((int)uVar7 != 0) && ((int)((ulonglong)uVar7 >> 0x20) == 3)) &&
     (iVar1 = thunk_FUN_01bed842((int)uVar7,param_4,3), iVar1 == 0)) {
    uVar8 = FUN_0165f3d8(&local_38,0x24);
    local_20 = (undefined4)(uVar8 >> 0x20);
    if ((int)uVar8 != 0) {
      uVar3 = 0;
      if ((uVar8 < 0x700000000) ||
         (iVar1 = thunk_FUN_01bed842(&DAT_004c19cb,(int)uVar8,7), iVar1 != 0)) goto LAB_0165db6c;
      local_1c = 0;
      local_28 = uVar8;
      FUN_0165f3d8(&local_28,0x3d);
      uVar8 = FUN_0165f3d8(&local_28,0x24);
      iVar1 = (int)(uVar8 >> 0x20);
      pcVar2 = (char *)uVar8;
      if (pcVar2 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c(&DAT_004c19d2,0x18,&DAT_01d06d7c);
      }
      if (iVar1 != 0) {
        if (iVar1 == 1) {
          cVar4 = *pcVar2;
          if (cVar4 == '+' || cVar4 == '-') goto LAB_0165dc88;
        }
        else {
          cVar4 = *pcVar2;
        }
        if (cVar4 == '+') {
          uVar8 = CONCAT44(iVar1 + -1,pcVar2 + 1);
        }
        if (uVar8 < 0x900000000) {
          unaff_r8 = 0;
          while( true ) {
            iVar1 = (int)(uVar8 >> 0x20);
            if (iVar1 == 0) break;
            uVar5 = *(byte *)uVar8 - 0x30;
            if (9 < uVar5) goto LAB_0165dc88;
            uVar8 = CONCAT44(iVar1 + -1,(byte *)uVar8 + 1);
            unaff_r8 = uVar5 + unaff_r8 * 10;
          }
LAB_0165dc20:
          uVar8 = FUN_0165f3d8(&local_38,0x24);
          if ((int)uVar8 != 0) {
            uVar3 = 1;
LAB_0165db6c:
            *param_1 = uVar3;
            param_1[1] = unaff_r8;
            *(ulonglong *)(param_1 + 2) = uVar8;
            return;
          }
          goto LAB_0165db14;
        }
        unaff_r8 = 0;
        while( true ) {
          iVar1 = (int)(uVar8 >> 0x20);
          if (iVar1 == 0) goto LAB_0165dc20;
          uVar5 = (uint)((ulonglong)unaff_r8 * 10);
          if ((int)((ulonglong)unaff_r8 * 10 >> 0x20) != 0) break;
          uVar6 = *(byte *)uVar8 - 0x30;
          unaff_r8 = uVar6 + uVar5;
          if ((9 < uVar6) || (uVar8 = CONCAT44(iVar1 + -1,(byte *)uVar8 + 1), CARRY4(uVar6,uVar5)))
          break;
        }
      }
LAB_0165dc88:
      uVar3 = 0x80000002;
      goto LAB_0165db1c;
    }
  }
LAB_0165db14:
  uVar3 = 0x80000003;
LAB_0165db1c:
  *param_1 = 2;
  param_1[1] = uVar3;
  return;
}

