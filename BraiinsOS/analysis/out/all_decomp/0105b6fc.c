// FUN_0105b6fc @ 0105b6fc size=484 calls_out=4 calls_in=0
// strings: SvcParams out of orderMandatory expects at least one valueTotal length of SvcParamValue exceeds u16::MAXInvalid address lengthInvalid family type.Invalid addr length for encode EcsOptionassertion failed: value.record_type() == RecordType::OPT

/* WARNING: Removing unreachable block (ram,0x0105bb08) */
/* WARNING: Removing unreachable block (ram,0x0105b7a0) */
/* WARNING: Removing unreachable block (ram,0x0105b8b0) */
/* WARNING: Removing unreachable block (ram,0x0105b8b4) */
/* WARNING: Removing unreachable block (ram,0x0105baec) */
/* WARNING: Removing unreachable block (ram,0x0105b8bc) */
/* WARNING: Removing unreachable block (ram,0x0105b8c8) */
/* WARNING: Removing unreachable block (ram,0x0105b7ac) */
/* WARNING: Removing unreachable block (ram,0x0105baf8) */
/* WARNING: Removing unreachable block (ram,0x0105bb00) */
/* WARNING: Removing unreachable block (ram,0x0105bb0c) */
/* WARNING: Removing unreachable block (ram,0x0105bb18) */
/* WARNING: Removing unreachable block (ram,0x0105bb1c) */
/* WARNING: Removing unreachable block (ram,0x0105b7b4) */
/* WARNING: Removing unreachable block (ram,0x0105bb2c) */

int FUN_0105b6fc(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  ushort *puVar6;
  undefined4 uVar7;
  ushort local_68 [34];
  
  iVar5 = *(int *)(param_2 + 0x14);
  local_68[0] = *(ushort *)(param_1 + 0x50) << 8 | *(ushort *)(param_1 + 0x50) >> 8;
  iVar2 = FUN_0105dce0(*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 0x10),iVar5,local_68
                       ,2);
  if (iVar2 == 0) {
    *(int *)(param_2 + 0x14) = iVar5 + 2;
    iVar2 = FUN_01039bf4(param_1 + 0xc,param_2,*(undefined1 *)(param_2 + 0x19));
    if (iVar2 == 0) {
      if (*(int *)(param_1 + 8) == 0) {
        return 0;
      }
      puVar6 = *(ushort **)(param_1 + 4);
      uVar3 = (uint)*puVar6;
      if (6 < uVar3) {
        if ((uVar3 == 9) || (uVar3 != 8)) {
          uVar3 = (uint)puVar6[1];
        }
        else {
          uVar3 = 0xffff;
        }
      }
      uVar4 = *(undefined4 *)(param_2 + 0x10);
      local_68[0] = (ushort)((uVar3 & 0xff) << 8) | (ushort)(uVar3 >> 8);
      iVar5 = *(int *)(param_2 + 0x14);
      uVar7 = *(undefined4 *)(param_2 + 0xc);
      iVar2 = FUN_0105dce0(uVar7,uVar4,iVar5,local_68,2);
      if (iVar2 == 0) {
        *(int *)(param_2 + 0x14) = iVar5 + 2;
        iVar2 = FUN_0105dedc(uVar7,uVar4,iVar5 + 2,2);
        if (iVar2 == 0) {
          uVar1 = puVar6[2];
          *(int *)(param_2 + 0x14) = iVar5 + 4;
                    /* WARNING: Could not recover jumptable at 0x0105b85c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          iVar2 = (*(code *)(&DAT_0105b860 + *(int *)(&DAT_0105b860 + (uint)uVar1 * 4)))();
          return iVar2;
        }
      }
    }
  }
  return iVar2;
}

