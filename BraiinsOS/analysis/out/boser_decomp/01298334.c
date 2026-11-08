// FUN_01298334 @ 01298334 size=440 calls_out=4 calls_in=11
// strings: 

void FUN_01298334(uint *param_1,undefined4 param_2,undefined4 *param_3)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *local_3c;
  uint local_38;
  uint local_34 [4];
  int local_24;
  
  iVar2 = FUN_012920c0(*param_3);
  uVar7 = param_3[1];
  FUN_01292a40(&local_3c,param_2);
  lVar1 = (longlong)iVar2 * 0x15180 + (ulonglong)uVar7;
  uVar7 = (uint)lVar1;
  local_24 = 0;
  uVar8 = uVar7 + 0x886cb780;
  iVar2 = (int)((ulonglong)lVar1 >> 0x20) - ((uVar7 < 0x77934880) + 0xe);
  uVar7 = local_38 + 1;
  if (local_38 != 0xffffffff) {
    uVar3 = uVar7 >> 1;
    do {
      if (uVar3 == 0) {
        if (local_38 != 0) {
          uVar6 = *local_3c;
          uVar4 = local_3c[1];
LAB_01298410:
          cVar5 = '\0';
          if ((int)(iVar2 - (uVar4 + (uVar8 < uVar6))) < 0 ==
              (SBORROW4(iVar2,uVar4) != SBORROW4(iVar2 - uVar4,(uint)(uVar8 < uVar6)))) {
            cVar5 = -1;
          }
          goto LAB_01298428;
        }
LAB_012984a8:
        local_3c = local_34;
LAB_012984ac:
        uVar7 = local_3c[1];
        uVar8 = local_3c[2];
        uVar3 = local_3c[3];
        *param_1 = *local_3c;
        param_1[1] = uVar7;
        param_1[2] = uVar8;
        param_1[3] = uVar3;
        *(short *)(param_1 + 4) = (short)param_2;
        return;
      }
      uVar6 = uVar3 - 1;
      if (local_38 <= uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar6,local_38,&DAT_01ce221c);
      }
      uVar4 = local_3c[uVar6 * 6];
      uVar6 = (local_3c + uVar6 * 6)[1];
      if (uVar3 == local_38) {
        cVar5 = (int)(iVar2 - (uVar6 + (uVar8 < uVar4))) < 0 !=
                (SBORROW4(iVar2,uVar6) != SBORROW4(iVar2 - uVar6,(uint)(uVar8 < uVar4)));
LAB_01298428:
        if (cVar5 == '\x01') goto LAB_01298444;
        if (cVar5 != -1) {
          if (uVar3 != 0) {
            uVar3 = uVar3 - 1;
            if (local_38 <= uVar3) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb12c(uVar3,local_38,&DAT_01ce05d0);
            }
            local_3c = local_3c + uVar3 * 6 + 2;
            goto LAB_012984ac;
          }
          goto LAB_012984a8;
        }
        local_24 = uVar3 + 1;
      }
      else {
        if (local_38 <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar3,local_38,&DAT_01ce222c);
        }
        if ((int)(iVar2 - (uVar6 + (uVar8 < uVar4))) < 0 ==
            (SBORROW4(iVar2,uVar6) != SBORROW4(iVar2 - uVar6,(uint)(uVar8 < uVar4)))) {
          uVar6 = local_3c[uVar3 * 6];
          uVar4 = (local_3c + uVar3 * 6)[1];
          goto LAB_01298410;
        }
LAB_01298444:
        uVar7 = uVar3;
      }
      uVar3 = local_24 + (uVar7 - local_24 >> 1);
    } while (uVar3 != uVar7);
  }
                    /* WARNING: Subroutine does not return */
  FUN_013073dc(&DAT_00533467,0x2b,&local_24,&DAT_01c26500,&DAT_01ce05e0);
}

