// FUN_019eb570 @ 019eb570 size=224 calls_out=5 calls_in=1
// strings: 

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x019eb624 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_019eb570(undefined4 *param_1)

{
  bool bVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint in_fpscr;
  double in_d0;
  double dVar7;
  double dVar8;
  uint local_68;
  undefined4 uStack_64;
  uint uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  uint local_48;
  undefined4 uStack_44;
  uint local_40;
  uint uStack_3c;
  uint uStack_38;
  
  FUN_019f60ac(param_1 + 4);
  iVar6 = param_1[0x10];
  if (iVar6 != 0) {
    FUN_019ac130(&local_48,1);
    local_58 = *param_1;
    uStack_54 = param_1[1];
    uStack_50 = param_1[2];
    local_68 = local_48;
    uStack_64 = uStack_44;
    uStack_60 = local_40;
    FUN_019ac248(&local_48,&local_68,&local_58);
    uVar3 = (uint)((ulonglong)local_40 * 1000000000);
    lVar2 = (ulonglong)uStack_3c * 1000000000 + ((ulonglong)local_40 * 1000000000 >> 0x20);
    uVar5 = (uint)lVar2;
    uVar4 = (uint)((ulonglong)lVar2 >> 0x20);
    bVar1 = CARRY4(uVar5,(uint)CARRY4(uVar3,uStack_38));
    FUN_01bf09c8(uVar3 + uStack_38,uVar5 + CARRY4(uVar3,uStack_38),uVar4 + bVar1,
                 CARRY4(uVar4,(uint)bVar1));
    dVar8 = (double)VectorUnsignedToFloat(iVar6,(byte)(in_fpscr >> 0x16) & 3);
    dVar7 = in_d0;
    if ((local_48 & 1) != 0) {
      dVar7 = 0.0;
    }
    FUN_01be5ea0(0xcccccccd,(int)((ulonglong)in_d0 >> 0x20),SUB84(dVar8,0));
    *(double *)(param_1 + 0xe) =
         *(double *)(param_1 + 0xe) * (1.0 - (1.0 - in_d0)) + (dVar7 / dVar8) * (1.0 - in_d0);
  }
  return;
}

