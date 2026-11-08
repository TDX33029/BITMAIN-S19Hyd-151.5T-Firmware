// FUN_0067c1d0 @ 0067c1d0 size=292 calls_out=1 calls_in=2
// strings: 

void FUN_0067c1d0(int *param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  undefined1 auStack_b0 [140];
  
  piVar2 = param_1 + 0x26;
  iVar6 = 0;
  do {
    iVar4 = *piVar2;
    uVar8 = piVar2[1];
    uVar5 = piVar2[2];
    bVar9 = piVar2[-0x26] <= iVar4;
    if ((iVar4 == piVar2[-0x26]) && (bVar9 = (uint)piVar2[-0x25] <= uVar8, uVar8 == piVar2[-0x25]))
    {
      if (uVar5 < (uint)piVar2[-0x24]) {
LAB_0067c23c:
        FUN_01bed4e2(auStack_b0,piVar2 + 3,0x8c);
        iVar7 = iVar6;
        while( true ) {
          piVar3 = (int *)((int)param_1 + iVar7);
          FUN_01bed4e2(piVar3 + 0x26,piVar3,0x98);
          if (iVar7 == 0) break;
          bVar9 = piVar3[-0x26] <= iVar4;
          if ((iVar4 == piVar3[-0x26]) &&
             (uVar1 = *(uint *)((int)param_1 + iVar7 + -0x94), bVar9 = uVar1 <= uVar8,
             uVar8 == uVar1)) {
            if ((uint)piVar3[-0x24] <= uVar5) goto LAB_0067c2bc;
          }
          else if (bVar9) goto LAB_0067c2bc;
          iVar7 = iVar7 + -0x98;
        }
        piVar3 = param_1;
LAB_0067c2bc:
        *piVar3 = iVar4;
        piVar3[1] = uVar8;
        piVar3[2] = uVar5;
        FUN_01bed4e2(piVar3 + 3,auStack_b0,0x8c);
      }
    }
    else if (!bVar9) goto LAB_0067c23c;
    piVar2 = piVar2 + 0x26;
    iVar6 = iVar6 + 0x98;
    if (piVar2 == param_1 + param_2 * 0x26) {
      return;
    }
  } while( true );
}

