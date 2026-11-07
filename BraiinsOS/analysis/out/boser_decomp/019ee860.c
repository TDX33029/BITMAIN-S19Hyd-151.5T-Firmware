// FUN_019ee860 @ 019ee860 size=448 calls_out=11 calls_in=71
// strings: 

void FUN_019ee860(undefined4 param_1)

{
  code *pcVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int extraout_r2;
  int iVar5;
  int iVar6;
  int *piVar7;
  char *pcVar8;
  int iVar9;
  bool bVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  
  uVar11 = thunk_FUN_01bee35a(param_1,param_1,0x20);
  piVar2 = (int *)((ulonglong)uVar11 >> 0x20);
  piVar7 = (int *)((int)uVar11 + extraout_r2);
  iVar5 = *piVar2;
  iVar6 = piVar2[1];
  pcVar8 = (char *)piVar2[2];
  if ((char)piVar7[0xe] != '\x01') {
    if ((char)piVar7[0xe] == '\x02') {
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d294c4);
      }
      goto LAB_019ee8d4;
    }
    FUN_019a2bcc(piVar7,&LAB_019efb68);
    *(undefined1 *)(piVar7 + 0xe) = 1;
  }
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d294d4);
  }
  bVar10 = *(char *)((int)piVar7 + 0x32) != '\x02';
  if (bVar10) {
    piVar7 = (int *)piVar7[8];
  }
  if (((!bVar10 || piVar7 == (int *)0x0) || (*piVar7 == 0)) ||
     (iVar5 != *(int *)(piVar7[1] + 8) + 8)) {
LAB_019ee8d4:
    FUN_019ec2c0(iVar5,iVar6);
    uVar12 = FUN_019ec3b8(iVar5 + 0x78,iVar5);
    uVar3 = (uint)(uVar12 >> 0x20);
    if ((uVar12 & 1) != 0) {
      if (*(uint *)(iVar5 + 0x44) <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar3,*(uint *)(iVar5 + 0x44),&DAT_01d29534);
      }
      FUN_019f9800(*(undefined4 *)(*(int *)(iVar5 + 0x40) + uVar3 * 8 + 4),iVar5 + 0xb0);
    }
    return;
  }
  if (piVar7[2] != 0) {
    FUN_01306fc8(&DAT_01d29514);
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x19eea08);
    (*pcVar1)();
  }
  iVar9 = piVar7[3];
  piVar7[2] = -1;
  if (iVar9 == 0) {
    piVar7[2] = 0;
    goto LAB_019ee8d4;
  }
  if ((*pcVar8 == '\0') && ((*(byte *)(iVar9 + 100) & 1) != 0)) {
    iVar4 = *(int *)(iVar9 + 0x58);
    *(undefined4 *)(iVar9 + 0x58) = 0;
    if (iVar4 == 0) {
      *(int *)(iVar9 + 0x58) = iVar6;
      goto LAB_019ee9e0;
    }
    FUN_019e5c10(iVar9 + 0x50,iVar4,iVar5);
    if (*(int *)(iVar9 + 0x58) != 0) {
      FUN_019d8d64();
    }
    *(int *)(iVar9 + 0x58) = iVar6;
  }
  else {
    FUN_019e5c10(iVar9 + 0x50,iVar6,iVar5);
  }
  if (*(int *)(iVar9 + 0x5c) != 0) {
    FUN_019ec500(iVar5);
  }
LAB_019ee9e0:
  piVar7[2] = piVar7[2] + 1;
  return;
}

