// FUN_00690fc4 @ 00690fc4 size=452 calls_out=1 calls_in=1
// strings: 

void FUN_00690fc4(int *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  
  bVar8 = *param_1 <= param_1[0x26];
  if ((param_1[0x26] == *param_1) &&
     (bVar8 = (uint)param_1[1] <= (uint)param_1[0x27], param_1[0x27] == param_1[1])) {
    if ((uint)param_1[0x28] < (uint)param_1[2]) {
LAB_0069108c:
      uVar7 = 2;
      iVar2 = 0;
      do {
        iVar3 = *(int *)((int)param_1 + iVar2 + 0x98);
        iVar5 = *(int *)((int)param_1 + iVar2 + 0x130);
        bVar8 = iVar3 <= iVar5;
        if ((iVar5 == iVar3) &&
           (uVar4 = *(uint *)((int)param_1 + iVar2 + 0x9c),
           uVar6 = *(uint *)((int)param_1 + iVar2 + 0x134), bVar8 = uVar4 <= uVar6, uVar6 == uVar4))
        {
          if (*(uint *)((int)param_1 + iVar2 + 0xa0) <= *(uint *)((int)param_1 + iVar2 + 0x138)) {
LAB_0069110c:
            bVar8 = true;
            goto LAB_00691110;
          }
        }
        else if (bVar8) goto LAB_0069110c;
        iVar2 = iVar2 + 0x98;
        uVar7 = uVar7 + 1;
      } while (param_2 * 0x98 + -0x130 != iVar2);
LAB_00691120:
      piVar1 = param_1 + param_2 * 0x26;
      uVar7 = 0;
      do {
        piVar1 = piVar1 + -0x26;
        iVar2 = 0;
        do {
          iVar3 = param_1[-iVar2];
          param_1[-iVar2] = piVar1[-iVar2];
          piVar1[-iVar2] = iVar3;
          bVar8 = iVar2 != -0x25;
          iVar2 = iVar2 + -1;
        } while (bVar8);
        uVar7 = uVar7 + 1;
        param_1 = param_1 + 0x26;
      } while (uVar7 != param_2 >> 1);
      return;
    }
  }
  else if (!bVar8) goto LAB_0069108c;
  uVar7 = 2;
  iVar2 = 0;
  do {
    iVar3 = *(int *)((int)param_1 + iVar2 + 0x98);
    iVar5 = *(int *)((int)param_1 + iVar2 + 0x130);
    bVar8 = iVar3 <= iVar5;
    if ((iVar5 == iVar3) &&
       (uVar4 = *(uint *)((int)param_1 + iVar2 + 0x9c),
       uVar6 = *(uint *)((int)param_1 + iVar2 + 0x134), bVar8 = uVar4 <= uVar6, uVar6 == uVar4)) {
      if (*(uint *)((int)param_1 + iVar2 + 0x138) < *(uint *)((int)param_1 + iVar2 + 0xa0))
      goto LAB_00691104;
    }
    else if (!bVar8) {
LAB_00691104:
      bVar8 = false;
LAB_00691110:
      if (uVar7 != param_2) {
        FUN_0069565c(param_1,param_2,0,LZCOUNT(param_2 | 1) << 1 ^ 0x3e);
        return;
      }
      if (!bVar8) {
        return;
      }
      goto LAB_00691120;
    }
    iVar2 = iVar2 + 0x98;
    uVar7 = uVar7 + 1;
    if (param_2 * 0x98 + -0x130 == iVar2) {
      return;
    }
  } while( true );
}

