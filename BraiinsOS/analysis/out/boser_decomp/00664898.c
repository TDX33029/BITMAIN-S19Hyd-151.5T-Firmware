// FUN_00664898 @ 00664898 size=376 calls_out=5 calls_in=834
// strings: a formatting trait implementation returned an error when the underlying stream did not

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00664898(uint *param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  ushort *puVar6;
  uint uVar7;
  uint local_30;
  uint local_2c;
  uint local_28;
  undefined1 uStack_21;
  
  if ((param_3 & 1) == 0) {
    uVar7 = (uint)*param_2;
    if (uVar7 != 0) {
      bVar2 = 0;
      uVar4 = 0;
      pbVar5 = param_2;
      do {
        puVar6 = (ushort *)(pbVar5 + 1);
        bVar1 = (byte)uVar7;
        if ((uint)(int)(char)bVar1 < 0x80000000) {
          pbVar5 = (byte *)((int)puVar6 + uVar7);
          uVar4 = uVar4 + uVar7;
        }
        else if (uVar7 == 0x80) {
          uVar4 = uVar4 + *puVar6;
          pbVar5 = (byte *)((int)puVar6 + *puVar6 + 2);
        }
        else {
          pbVar5 = (byte *)((int)puVar6 +
                           (uVar7 >> 2 & 2) +
                           (uVar7 >> 1 & 2) +
                           (uint)(byte)(((bVar1 & 1) << 1 | (bVar1 & 3) >> 1) << 1));
          bVar2 = uVar4 == 0 | bVar2;
        }
        uVar7 = (uint)*pbVar5;
      } while (uVar7 != 0);
      uVar7 = 0;
      if ((!(bool)(bVar2 & uVar4 < 0x10)) && (uVar7 = uVar4 * 2, 0x7fffffff < uVar7)) {
                    /* WARNING: Subroutine does not return */
        FUN_00664730();
      }
      goto LAB_00664968;
    }
  }
  else {
    uVar7 = param_3 >> 1;
LAB_00664968:
    if (uVar7 != 0) {
      local_2c = FUN_01298504(uVar7,1);
      if (local_2c == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,uVar7);
      }
      goto LAB_00664998;
    }
  }
  local_2c = 1;
  uVar7 = 0;
LAB_00664998:
  local_28 = 0;
  local_30 = uVar7;
  iVar3 = FUN_012fa178(&local_30,&DAT_01c03e78,param_2,param_3);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc("a formatting trait implementation returned an error when the underlying stream did not"
                 ,0x56,&uStack_21,&DAT_01c03e58);
  }
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = local_28;
  return;
}

